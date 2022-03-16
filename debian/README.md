# Build a debian package

## Prerequisite

```
sudo apt install devscripts
```

## Custom Build Flags

By default, the build optimization level is "-O2". To append new optimization flags, please set the shell environment variables `DEB_CFLAGS_APPEND` `DEB_CXXFLAGS_APPEND` and `DEB_LDFLAGS_APPEND` with additional flags before building.

For example,

```
$> export DEB_CFLAGS_APPEND="-O3 -flto=16 -fdevirtualize-at-ltrans -flto-odr-type-merging -ffat-lto-objects -fipa-pta"; \
   export DEB_CXXFLAGS_APPEND="-O3 -flto=16 -fdevirtualize-at-ltrans -flto-odr-type-merging -ffat-lto-objects -fipa-pta"; \ 
   export DEB_LDFLAGS_APPEND="-O3 -flto=16 -fdevirtualize-at-ltrans -flto-odr-type-merging -ffat-lto-objects -fipa-pta"
```

## Build

Go the the root path of the repository and execute

```
$> dpkg-buildpackage -b --no-sign
```
| Arugments   | Description                     |
|-------------|---------------------------------|
| `-b`        | build the binaries only         |
| `--no-sign` |  do not sign any file (optinal) |


## Package to install

Install the package with no "dbgsym" in its name.