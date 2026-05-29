#include "window.h"
#include <stdio.h>
#include <stdlib.h>

struct Window
{
    const char *title;
    uint32_t width;
    uint32_t height;
    bool is_open;
    bool is_fullscreen;
};

Window *create_window(const char *title, uint32_t width, uint32_t height, bool is_open, bool is_fullscreen)
{
    Window *window = malloc(sizeof(Window));
    // can do null check here
    window->title = title;
    window->height = height;
    window->width = width;
    window->is_open = is_open;
    window->is_fullscreen = is_fullscreen;

    return window;
}

void close_window(Window *window)
{
    // can do null check here
    printf("--- closing the window ---");
    free(window);
}

// getters
const char *get_window_title(const Window *window)
{
    return window->title;
}

uint32_t get_window_width(const Window *window)
{
    return window->width;
}

uint32_t get_window_height(const Window *window)
{
    return window->height;
}

bool get_window_is_open(const Window *window)
{
    return window->is_open;
}

bool get_window_is_fullscreen(const Window *window)
{
    return window->is_fullscreen;
}