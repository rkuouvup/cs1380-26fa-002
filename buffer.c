#include <stdio.h>
#include <string.h>

int main() {
    char buf[8];
    const char *user_input = "too-long-input";

    // strcpy(buf, user_input); //==> BAD
    //if (the size of buf <= the siez of user_input)
    /*char *strncp = strncpy(buf, user_input, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';

    printf("buf:\t%p\n", buf);
    printf("uinput:\t%p\n", user_input);
    printf("strncp:\t%p\n", strncp);
    printf("buf:\t%s\n", buf);*/

    // printf(fmt str, ...)
    // sprintf(dest str, fmt str, ...)
    // snprintf(dest str, size, fmt str, ...);
    int written = snprintf(buf, sizeof buf, "%s", user_input);
    printf("written:\t%d\n", written);

    if (written < 0 || (size_t)written >= sizeof buf) {
        // error handling / exception handling
        fprintf(stderr, "Formatting failed or text was truncated\n");
        return 1;
    }
    printf("buf:\t%s\n", buf);

    return 0;
}