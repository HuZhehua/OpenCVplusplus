# Welcome to OpenCV++!
[![](./doc/README_pictures/OpenCVXX_logo.png)](https://github.com/HuZhehua/OpenCVplusplus.git)

## What is OpenCV++?


## How to use it?
* Step1 Download
```
git clone https://github.com/HuZhehua/OpenCVplusplus
```
* Step2 Compile and Install
```
mkdir build
cd build
cmake ..
make
make install
```
>Above commands will install libOpenCVplus.so.*(*is version) into "/usr/local/". To change default path, use

```
cmake -D
```

* Step3 include and code forward
```
include <OpenCVplus/*>
```

## Notes
* For the sake of cross-platfrom gtest support, I keep the googletest package as its origin exclude below changes in googletest/CMakeLists.txt
```
option(BUILD_GTEST "Builds the googletest subproject" ON)

#Note that googlemock target already builds googletest
option(BUILD_GMOCK "Builds the googlemock subproject" OFF)
```
Googlemock is not used yet, so I keep it out of compile process.