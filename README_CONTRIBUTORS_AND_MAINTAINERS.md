# Notes for Contributors and Maintainers

This page contains information for developers contributing to and maintaining the **TiltSearch** library.

## General Information for Contributing

Contributions to the **TiltSearch** library are welcome. Please follow the following guidelines below when contributing:
- Open an [issue](https://github.com/ti-uni-bielefeld/TiltSearch/issues) or [pull request](https://github.com/ti-uni-bielefeld/TiltSearch/pulls) on the GitHub repository for any suggestions, bug reports, or contributions.
- Format the code as described in the [Formatting](#formatting) section before contributing.

## Developing in parallel with T-SIMD and WarpingSIMD

For developing **TiltSearch** in parallel with **T-SIMD** and **WarpingSIMD** without needing to regenerate the single headers of **T-SIMD** and **WarpingSIMD**, the include pointing to `external/` can be changed to point to the `src/lib/tsimd/` and `src/lib/warpingsimd/` directories in the **T-SIMD** and **WarpingSIMD** repositories, respectively. Remember not to commit this change or change it back before committing.

## Formatting

The code is formatted with `clang-format` version 16 or newer (https://clang.llvm.org/docs/ClangFormat.html, https://releases.llvm.org/download.html) using the configuration file `.clang-format`.

`clang-format` can be installed with the following commands for example:

```shell
$ pip install clang-format
```
or
```shell
$ pip3 install clang-format
```

To format the code, run

```shell
$ make format
```

This will format all files in the project ending in `.C` or `.H`.

The code should ideally be formatted after every change and before making a new release to keep a consistent code style.

## Releasing a new version

To release a new version, follow these steps:

### Before the release

- Format the code with `make format`.
- Make sure the code is working properly by running the tests.

### Creating the release

- Choose a new version number according to the [Semantic Versioning](https://semver.org/) scheme.
- Make sure that you are on the commit you want to tag as the release (usually the most recent one).
- Create a new tag for the new version with the following command:
  ```shell
  $ git tag -a <tag> -m "<description>"
  ```
  For example, using version 1.2.3 as an example:
  ```shell
  $ git tag -a v1.2.3 -m "Version 1.2.3"
  ```

  It is important that the tag name starts with a lowercase `v` followed by the version number (meaning it must match `v*.*.*`).
- Push the tag to the repository:
  ```shell
  $ git push # push the changes
  $ git push origin tag <tag> # push the tag
  ```
  (replace `<tag>` with the tag name, e.g., `v1.2.3`)

  This automatically triggers GitHub actions to do the following things (defined in the [.github/workflows/](.github/workflows/) directory):
  - Create a release draft on GitHub.
- Edit the release draft in the [releases section on GitHub](https://github.com/ti-uni-bielefeld/TiltSearch/releases) to add the changelog and other information. See the previous releases for examples.
  - Note that you might have to wait a few moments for the GitHub actions to finish before the release draft appears.
- Publish the release.
