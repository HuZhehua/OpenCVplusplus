# _______________________________________________
# 		Setting
# _______________________________________________
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# _______________________________________________
# 		Library
# _______________________________________________
# TODO:MODITY
set(SOURCE_FILES
        src/sqrt.cpp
        )

set(HEADER_FILES
        include/sqrt.hpp
        )


add_library(libsqrt SHARED ${SOURCE_FILES} ${HEADER_FILES})
set_target_properties(libsqrt PROPERTIES CLEAN_DIRECT_OUTPUT 1)  # do not clean the same name lib
set_target_properties(libsqrt PROPERTIES VERSION 1.0.0)


add_library(libsqrt_static STATIC ${SOURCE_FILES} ${HEADER_FILES})
# static lib with duplicate name need to set as beblow
set_target_properties(libsqrt_static PROPERTIES OUTPUT_NAME "libsqrt")
set_target_properties(libsqrt_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)  # do not clean the same name lib

# _______________________________________________
# 		Installation
# _______________________________________________
install(TARGETS libsqrt
        LIBRARY DESTINATION ${CAMKE_INSTALL_PREFIX}/lib)

set(LIBSQRT_PATH ${CAMKE_INSTALL_PREFIX}/include/OpenCVplus/sqrt/)
set(INSTALL_FILE include/sqrt.hpp)
install(FILES ${INSTALL_FILE} DESTINATION ${LIBSQRT_PATH})
