# _______________________________________________
# 		Setting
# _______________________________________________
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
# TODO:MODIFY
include_directories(${PROJECT_SOURCE_DIR}/modules/sqrt/include)

# _______________________________________________
# 		Executable
# _______________________________________________
# TODO:MODIFY
add_executable(sqrt_unittest sqrt_unittest.cpp)
target_link_libraries(sqrt_unittest libsqrt)

target_link_libraries(sqrt_unittest gtest gtest_main)



