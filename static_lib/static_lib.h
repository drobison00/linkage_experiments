#pragma once

#include "extern_lib/extern_explicit_templates.h"

#include <iostream>

// Existing static_function declaration
void static_function();

void static_extern_explicit_template_function();

// Inline function definition
inline void static_inline_function() {
    std::cout << "This is an inline function from static_lib." << std::endl;
}

// Class with inline method
class StaticClass {
public:
    inline void static_inline_method() {
        std::cout << "This is an inline method from StaticClass in static_lib." << std::endl;
    }
};

// Add template declarations
template<typename T>
void static_template_function(const T &value);

template<typename T>
class StaticTemplateClass {
public:
    StaticTemplateClass(T value) : value_(value) {}

    void print_value();

private:
    T value_;
};

template<typename T>
class StaticTemplateHeaderClass {
public:
    StaticTemplateHeaderClass(T value) : value_(value) {}

    void print_value();

private:
    T value_;
};

template<typename T>
void StaticTemplateHeaderClass<T>::print_value() {
    std::cout << "Value in StaticTemplateHeaderClass: " << value_ << std::endl;
}
