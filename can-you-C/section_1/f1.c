#include <stdio.h>

static int cannot_access_this_in_other_files = 69;

__attribute__((unused)) static void cannot_access_outside_this_file(void)
{

    static int static_var_will_only_created_once_for_this_function = 0;
    static_var_will_only_created_once_for_this_function++;
    printf("You called -> cannot_access_outside_this_file -> value: %d\n", static_var_will_only_created_once_for_this_function);

    printf("static_value_from_file_cannot_be_accessed_outside: %d\n", cannot_access_this_in_other_files);
}

__attribute__((unused)) void can_access_outside_this_file(void) // normal function
{
    static int static_var_will_only_created_once_for_this_function = 0;
    static_var_will_only_created_once_for_this_function++;
    printf("You called -> can_access_outside_this_file -> value: %d\n", static_var_will_only_created_once_for_this_function);
    printf("static_value_from_file_cannot_be_accessed_outside: %d\n", cannot_access_this_in_other_files);
}

// void caller()
// {
//     can_access_outside_this_file();
//     cannot_access_outside_this_file();
// }