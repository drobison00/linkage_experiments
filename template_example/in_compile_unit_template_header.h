#pragma once

#include <iostream>

/**
 * This header is intended to illustrate in-compilation unit linking dynamics when using a template class, with in-header member definitions, that
 * is paired with a source file that explicitly instantiates the template for some types.
 *
 * Associated source file: in_compile_unit_template_header.cpp
 *
 * Effect: In main, we should be able to directly use int, double, and string variants.
 */

template<typename T>
class InCompileUnitTemplateHeaderClass {
public:
    InCompileUnitTemplateHeaderClass(T value) : value_(value) {}

    // Define the member function in the header file
    void print_value() {
        std::cout << "Value in InCompileUnitTemplateHeaderClass: " << value_ << std::endl;
    }

private:
    T value_;
};