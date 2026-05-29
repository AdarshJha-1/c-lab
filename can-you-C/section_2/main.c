// #include "window.h" -> already included in renderer.h
#include "input.h"
#include "renderer.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
this arch ->
src/
    main.c
    renderer.c
    renderer.h
    window.c
    window.h
    input.c
    input.h
 */

int main(void)
{
    // MANDATORY: Seed the random engine ONCE at the start of main
    srand((unsigned int)time(NULL));

    // using window wrapper..it may use any lib API to create window underneath
    Window *window = create_window("My Window", 600, 400, true, false);
    if (window == NULL)
    {
        printf("ERROR: error creating window");
        exit(1);
    }

    // render will take this window and render it value (idk who takes who like render take window..or not, all these code are straight-up from my ASS)
    render_window(window);

    // using input wrapper (it can use any low level API, this code doesn't care, this only uses it)
    char key_pressed = get_key_press();
    printf("Pressed Key: %c\n", key_pressed);

    int x_axis_pos;
    int y_axis_pos;
    cursor_pointer_on_x_y_axis(&x_axis_pos, &y_axis_pos);
    printf("cursor position on x-axis: %d\n", x_axis_pos);
    printf("cursor position on y-axis: %d\n", y_axis_pos);

    close_window(window);

    return 0;
}
