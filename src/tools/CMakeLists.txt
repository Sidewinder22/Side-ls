# tools cmake file

set(LIB tools)

add_library(${LIB} SHARED
	Filesystem.cpp
)
	
target_include_directories(${LIB}
    # For the public header files
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)