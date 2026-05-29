#include "renderer.h"

#include <stdio.h>

// this just simply print window data nothing more than that
void render_window(Window *window)
{
    printf("---- Window values ----\n");

    //     printf("window title: %s\n", window->title);
    //     printf("window weight: %d\n", window->width);
    //     printf("window height: %d\n", window->height);
    //     printf("is window full screen: %d\n", window->is_fullscreen);
    //     printf("is window open: %d\n", window->is_open);

    // now i have to to call getters
    printf("window title: %s\n", get_window_title(window));
    printf("window weight: %d\n", get_window_width(window));
    printf("window height: %d\n", get_window_height(window));
    printf("is window open: %d\n", get_window_is_open(window));
    printf("is window full screen: %d\n", get_window_is_fullscreen(window));
}