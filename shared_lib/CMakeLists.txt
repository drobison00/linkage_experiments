add_library(shared_lib SHARED shared_lib.cpp)

#target_link_libraries(shared_lib
#    PUBLIC
#    extern_lib
#    )

# Export the include directory
target_include_directories(shared_lib PUBLIC
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR})