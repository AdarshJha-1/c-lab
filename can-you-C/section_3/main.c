#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    section about memory
    STACK
      ↓

    HEAP
      ↑
11
    DATA
    TEXT
*/

int *return_pointer_to_var_of_stack() // it is a dangling pointer as a is in stack when function end all variables are discarded so no a is available
{
    int a = 10;
    return &a;
}

int *valid_way() // this is valid but can cause memory leak the caller should free this using free() function and we should be causes to not double free it
{
    int *a = malloc(sizeof(int));
    a = 10;
    return a;
}

int main()
{

    // undefined behaviour

    // Add these flags to give show them as error
    // gcc -o main -Wall -Werror -Wextra main.c
    // int x;
    // printf("%d\n", x); // print garbage value

    // char name[6];
    // char *name; -> this will not work we have to have some memory allocated which mean this name pointer should point like some memory location
    // this will work
    char *name = malloc(6); // need to know size or we can set some max size or simply use string literal like

    strcpy(name, "Luffy");
    printf("%s\n", name);

    strcpy(name, "Zoro");
    printf("%s\n", name);

    char *str_literal = "This is string literal";
    printf("%s\n", str_literal);
    str_literal = "This is string literal 2";
    printf("%s\n", str_literal);

    // dangling pointer
    int *p;
    {
        int a = 10;
        p = &a;
        printf("value pointed by pointer p: %d\n", *p);
    }
    printf("value pointed by pointer p(now this is not valid): %d\n", *p);
    return 0;
}