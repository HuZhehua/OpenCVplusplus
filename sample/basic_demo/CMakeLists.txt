# _______________________________________________
# 		Setting
# _______________________________________________
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )
# TODO:MODIFY
include_directories(${PROJECT_SOURCE_DIR}/modules/sqrt/include)

# _______________________________________________
# 		Executable
# _______________________________________________
# TODO:MODIFY
set(SOURCE_FILES src/basic_demo.cpp)
add_executable(main ${SOURCE_FILES})
target_link_libraries(main libsqrt)
