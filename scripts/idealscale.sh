#!/bin/bash
# ===========================================================================
# 
# idealscale.sh --
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

# At least 2 arguments required
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 database variants"; exit;
fi

# First command line parameter is the database to process
database=$1
# Second command line parameters are the database variants to process
variants=$2

# Variable tracking the minimum scale parameters
#   NOTE: Empty for now, initialized later with first set of scale parameter
min_scales=();

# Iterate the database variants
for variant in $variants; do
  # Find the base names of all image files in the database variant
  names=$(find "$database/$variant" -name '*.pgm' -exec basename {} .pgm \;)
  # Iterate over all images in the database
  for name in $names; do
    # Compute the ideal scale parameter of this image
    #   NOTE: Use sed to remove lines starting with # (verbose output)
    scales=$(build/src/IdealScale "$database/$variant" "$name" | sed '/^#/d');
    # Turn scales into array
    # shellcheck disable=SC2206
    scales=( $scales );
    # If the current minimum is empty
    # shellcheck disable=SC2128
    if [ -z "$min_scales" ]; then
      # Initialize with new scales
      # shellcheck disable=SC2206
      min_scales=( ${scales[@]} );
    fi
    # Iterate over the new scale parameters for this image
    for index in ${!scales[*]}; do
      # Compare new scale to current min scale
      #   NOTE: Use bc calculator to do floating point comparison
      if (( $(echo "${scales[$index]} < ${min_scales[$index]}" | bc) )); then
        # Update the minimum scale
        min_scales[$index]=${scales[$index]}
      fi
    done
  done
done

# Print the array of minimum scale parameters
echo "${min_scales[@]}"
