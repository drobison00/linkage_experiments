#pragma once


#include <iostream>

// Existing shared_function declaration
void shared_function();

void shared_extern_explicit_template_function();

// Inline function definition
inline void shared_inline_function() {
    std::cout << "This is an inline function from shared_lib." << std::endl;
}

// Class with inline method
class SharedClass {
public:
    inline void shared_inline_method() {
        std::cout << "This is an inline method from SharedClass in shared_lib." << std::endl;
    }
};

// Add template declarations
template<typename T>
void shared_template_function(const T &value);

template<typename T>
class SharedTemplateClass {
public:
    SharedTemplateClass(T value) : value_(value) {}

    void print_value();

private:
    T value_;
};

template<typename T>
class SharedTemplateHeaderClass {
public:
    SharedTemplateHeaderClass(T value) : value_(value) {}

    void print_value();

private:
    T value_;
};

template<typename T>
void SharedTemplateHeaderClass<T>::print_value() {
    std::cout << "Value in SharedTemplateHeaderClass: " << value_ << std::endl;
}