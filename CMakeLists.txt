# _______________________________________________
# 		Project Information 
# _______________________________________________
project(Test)
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)

# _______________________________________________
# 		Requirement 
# _______________________________________________
cmake_minimum_required( VERSION 2.8)

# _______________________________________________
# 		Setting 
# _______________________________________________
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )

# _______________________________________________
# 		SourceTree
# _______________________________________________
aux_source_directory( ./src MAIN_SRC)
add_executable(main ${MAIN_SRC})


