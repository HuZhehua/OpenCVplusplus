# _______________________________________________
# 		Project Information
# _______________________________________________
# TODO:MODIFY
project(OpenCVplus)
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)

# _______________________________________________
# 		Requirement
# _______________________________________________
cmake_minimum_required( VERSION 2.8)

# _______________________________________________
# 		Setting
# _______________________________________________
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CAMKE_INSTALL_PREFIX /usr/local)

# _______________________________________________
# 		SourceTree
# _______________________________________________
add_subdirectory(modules)
add_subdirectory(sample)
add_subdirectory(test)


