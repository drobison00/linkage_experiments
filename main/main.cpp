#include "anonymous_namespace/anonymous_namespace.h"
#include "in_unit_extern_templates/in_unit_extern_templates.h"
#include "internal_linkage/internal_linkage.h"
#include "shared_lib/shared_lib.h"
#include "static_lib/static_lib.h"
#include "template_example/in_compile_unit_template_header.h"
#include "template_example/template_example.h"

int main() {
    shared_function();
    static_function();
    //internal_linkage_function();
    anonymous_namespace_function();

    SharedClass shared_class;
    shared_class.shared_inline_method();

    StaticClass static_class;
    static_class.static_inline_method();

    // Use the 'extern' component
    in_unit_extern_template_function();
    global_variable = 100;
    in_unit_extern_template_function();

    // Use the new 'extern' function
    in_unit_extern_function();

    // Use the new 'extern' class
    InUnitExternTemplateClass extern_class;
    extern_class.print_hello();

    // Use the template function
    print_value(42);
    print_value(3.14);
    print_value("Template function");

    // Use the template class
    TemplateClass<int> int_instance(123);
    int_instance.print_value();

    TemplateClass<double> double_instance(5.678);
    double_instance.print_value();

    TemplateClass<std::string> string_instance("Template class");
    string_instance.print_value();

    // Use the shared library template instances
    shared_template_function(100);
    shared_template_function(4.56);

    SharedTemplateClass<int> shared_int_instance(789);
    shared_int_instance.print_value();

    SharedTemplateClass<double> shared_double_instance(3.21);
    shared_double_instance.print_value();

    // Use the static library template instances
    static_template_function(200);
    static_template_function(8.12);

    StaticTemplateClass<int> static_int_instance(987);
    static_int_instance.print_value();

    StaticTemplateClass<double> static_double_instance(1.23);
    static_double_instance.print_value();

    InCompileUnitTemplateHeaderClass<int> int_header_instance(111);
    int_header_instance.print_value();

    InCompileUnitTemplateHeaderClass<double> double_header_instance(2.34);
    double_header_instance.print_value();

    InCompileUnitTemplateHeaderClass<std::string> string_header_instance("Defined in header");
    string_header_instance.print_value();

    SharedTemplateHeaderClass<int> shared_int_header_instance(300);
    shared_int_header_instance.print_value();

    SharedTemplateHeaderClass<double> shared_double_header_instance(5.67);
    shared_double_header_instance.print_value();

    SharedTemplateHeaderClass<std::string> shared_string_header_instance("Shared in header");
    shared_string_header_instance.print_value();

    // Use the static library new template classes
    StaticTemplateHeaderClass<int> static_int_header_instance(400);
    static_int_header_instance.print_value();

    StaticTemplateHeaderClass<double> static_double_header_instance(9.10);
    static_double_header_instance.print_value();

    StaticTemplateHeaderClass<std::string> static_string_header_instance("Static in header");
    static_string_header_instance.print_value();

    static_extern_explicit_template_function();

    shared_extern_explicit_template_function();

    return 0;
}