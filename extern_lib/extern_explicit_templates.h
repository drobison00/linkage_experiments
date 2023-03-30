#pragma once

#include <iostream>

template<typename T>
class ExternTemplateClass {
public:
    ExternTemplateClass(T value) : value_(value) {}

    // Note: even though we define this here, and the compiler will generate code for it, it will not be available in the compilation unit
    // for int, double, and std::string variants because we declared them as extern in this header file.
    void print_value() {
        std::cout << "Value in ExternTemplateClass: " << value_ << std::endl;
    }

private:
    T value_;
};

// Declare extern instances of the template class
// This causes compilation units that include this header to not instantiate the template class for the extern types
// and instead have the linker resolve them; interestingly, these templates won't be available within this compilation unit.

extern template class ExternTemplateClass<int>;
extern template class ExternTemplateClass<double>;
extern template class ExternTemplateClass<std::string>;