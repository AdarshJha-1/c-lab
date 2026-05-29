#if !defined(INPUT_H)
#define INPUT_H

// simulating take input such as keyboard, mouse, other perfreals
// idk what actual APIs are though it is just public interface for public to use (public -> me only who is going to use code written by me lol)

// is this exists ??
char get_key_press(void);
void cursor_pointer_on_x_y_axis(int *const, int *const);

#endif // INPUT_H
