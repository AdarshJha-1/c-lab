// #include "f1.c"  // this will do like copy f1.c files into this main.c so this will not work as intented with static keyword w'll have to use header file  like below
#include "f1.h"

#include <stdio.h>

// macros
#define BEST_ANIME "BLEACH"
#define SQUARE(x) ((x) * (x))

enum Color
{
    RED,
    Green,
    Blue
};

void foo();

// declaring math.c file function here so compiler know this function exists
// int add(int, int); -> we can do this or have a header file like math.h to tell compiler this function declaration do exist

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;
    // unsigned int x = -1;
    // printf("%u\n", x);
    // x--;
    // printf("%d\n", x);

    // char name[] = "ADARSH";
    // char *name2 = "ADARSH";
    // printf("%s\n", name);
    // printf("%s\n", name2);

    // const char name[] = "ADARSH";
    // const char *name2 = "ADARSH";
    // printf("%s\n", name);
    // printf("%s\n", name2);

    // char name[] = "ADARSH";
    // const char *name2 = "ADARSH";
    // printf("%s\n", name);
    // printf("%s\n", name2);

    // printf("%zu\n", sizeof(name));  // number of char + null terminator '\0'
    // printf("%zu\n", sizeof(name2)); // 8-byte only

    // const char *big_string = "this is pretty big string still size of variable will be 8 byte as the variable is just a pointer";
    // printf("%zu\n", sizeof(big_string)); // 8-byte only

    // printf("%u\n", RED);

    // This is very imp.

    // wow :0
    // int *a = (int *)0x0000000A;
    // printf("%ls\n", a);

    // char *str = "string";
    // printf("%s\n", str);

    // char str2[] = "str2";
    // printf("%s\n", str2);

    // int arr[] = {1, 2, 3};
    // printf("%ls\n", arr);

    int x = 10;
    int y = 20;
    (void)x;
    (void)y;
    // const int *const a = &x;
    // a = &y;

    // printf("%d", *a);

    int a = 10;
    int *xa = &a;
    printf("%d\n", *xa);

    int b = 69;
    const int *xb = &b;
    printf("%d\n", *xb);

    // const int *a -> this is like pointer to a const int means pointer can point to diff memory address but the value stored in it will be read only, can't change value of the address pointed by the pointer

    // int *const a -> this is like a const pointer pointing to int variable, means value can be change on the memory location pointed by the pointer but pointer can't point to diff memory address

    // const int *const a -> this combined of both pointer and the value at the memory address pointed by the pointer both are read-only mean no can can be modified;

    // static int some_val = 10;
    // printf("%d\n", some_val);

    // foo();
    // foo();
    // foo();
    // foo();

    // can_access_outside_this_file();

    // used directly
    // int sum = add(10, 20);
    // printf("%d\n", sum);

    printf("%s\n", BEST_ANIME);
    printf("%d\n", SQUARE(10));

#ifdef DEBUG
    printf("hey i am a debug print");
#endif // DEBUG
    return 0;
}

void foo()
{
    static int counter = 0;
    counter++;
    printf("%d\n", counter);
}
