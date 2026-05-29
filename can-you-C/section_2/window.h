#include <stdint.h>
#include <stdbool.h>

#if !defined(WINDOW_H)
#define WINDOW_H

// something called -> Opaque structs (still didn't understand will deep dive)
// typedef struct
// {
//     const char *title;
//     uint32_t width;
//     uint32_t height;
//     bool is_open;
//     bool is_fullscreen;

// } Window;

typedef struct Window Window;

Window *create_window(const char *title, uint32_t width, uint32_t height, bool is_open, bool is_fullscreen);
void close_window(Window *window);

// getters
const char *get_window_title(const Window *window);
uint32_t get_window_width(const Window *window);
uint32_t get_window_height(const Window *window);
bool get_window_is_open(const Window *window);
bool get_window_is_fullscreen(const Window *window);

#endif // WINDOW_H
