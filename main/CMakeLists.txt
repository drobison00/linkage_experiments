add_executable(main main.cpp
    ${CMAKE_SOURCE_DIR}/anonymous_namespace/anonymous_namespace.cpp
    ${CMAKE_SOURCE_DIR}/in_unit_extern_templates/in_unit_extern_templates.cpp
    ${CMAKE_SOURCE_DIR}/template_example/in_compile_unit_template_header.cpp
    ${CMAKE_SOURCE_DIR}/internal_linkage/internal_linkage.cpp)

target_link_libraries(main PRIVATE shared_lib static_lib)
target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR})
