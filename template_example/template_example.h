#pragma once

#include <iostream>

/**
 * Generic template example, with a template function and a template class. This header will be included in main, and the compiler should instantiate
 * the template for the types used in main.
 *
 *
 * Effect: Vanilla template usage
 */

// Template function
template <typename T>
void print_value(const T& value) {
    std::cout << "Value: " << value << std::endl;
}

// Template class
template <typename T>
class TemplateClass {
public:
    TemplateClass(T value) : value_(value) {}

    void print_value() {
        std::cout << "Value in TemplateClass: " << value_ << std::endl;
    }

private:
    T value_;
};