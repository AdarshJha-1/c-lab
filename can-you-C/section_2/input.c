#include "input.h"
#include <stdlib.h>
#include <string.h>

// this is just me simulating the wrapper for graphic or other lib for purpose of using their API like input etc same with other files

// retrun random key from char array consisting only 0-9, A-Z and a-z, total keys = 10 + 26 + 26 = 62 + 1 (\0)
char get_key_press(void)
{
    const char *keys = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int n = strlen(keys);
    int randIdx = rand() % n;

    char key_pressed = keys[randIdx];
    return key_pressed;
}

// this just return current cursor location on screen (just a simulation)
// __attribute__((unused)) -> this should be used when really function is not called
// here just for show off
__attribute__((unused)) void cursor_pointer_on_x_y_axis(int *const x_axis, int *const y_axis)
{
    *x_axis = 69; // :)
    *y_axis = 96; // :(
}