#!/bin/bash
# ===========================================================================
# 
# searchplot.sh --
# Christoph Berganski
# 
# This source code file is part of the following software:
# 
#    - the low-level C++ template SIMD library
#    - the SIMD implementation of the MinWarping and the 2D-Warping methods 
#      for local visual homing.
# 
# The software is provided based on the accompanying license agreement in the
# file LICENSE.md.
# The software is provided "as is" without any warranty by the licensor and
# without any liability of the licensor, and the software may not be
# distributed by the licensee; see the license agreement for details.
# 
# (C) Ralf Möller
#     Computer Engineering
#     Faculty of Technology
#     Bielefeld University
#     www.ti.uni-bielefeld.de
# 
# ===========================================================================

# If no search strategy is selected, select the grid search
if [[ -z "$search_strategy" ]]; then
  export search_strategy=0
fi

# Run the demo program with logging of the search process and collect results
results="$(logging=1 build/src/TiltSearchDemo "${@:2}")"
# If the execution of the search tool failed
# shellcheck disable=SC2181
if [[ $? -ne 0 ]]; then
  # Print raw results and stop
  echo "$results"
  exit
fi

# The first command line argument is the name of the output file
output="${*:1:1}"
# Create a temporary file to store the search log
logfile=$(mktemp)
# echo $logfile

# Extract the search log from output
echo "$results" | sed '/^[>]/!d' | sed 's/>//g' >"$logfile"
# Extract the (true) argmin from output
argmin=$(echo "$results" | sed '/^[#,>]/d' | cut -d' ' -f10-11)

# Select the plotting script to use for the searcher
case $search_strategy in
0)
  # Plot the search log as heatmap
  # shellcheck disable=SC2086
  python3 -m heatmap "$logfile" "$output" --argmin $argmin
  ;;
1)
  # Extra logfile for background required
  background=$(mktemp)
  # Run grid search with logging to produce the background
  results="$(search_strategy=0 logging=1 build/src/TiltSearchDemo "${@:2}")"
  # Extract the search log from output
  echo "$results" | sed '/^[>]/!d' | sed 's/>//g' >"$background"
  # Plot the pattern search on top of the background
  # shellcheck disable=SC2086
  python3 -m pattern "$logfile" "$output" "$background" --argmin $argmin
  ;;
2)
  # Extra logfile for background required
  background=$(mktemp)
  # Run grid search with logging to produce the background
  results="$(search_strategy=0 logging=1 build/src/TiltSearchDemo "${@:2}")"
  # Extract the search log from output
  echo "$results" | sed '/^[>]/!d' | sed 's/>//g' >"$background"
  # Plot the simplex search on top of the background
  # shellcheck disable=SC2086
  python3 -m simplex "$logfile" "$output" "$background" --argmin $argmin
  ;;
esac
