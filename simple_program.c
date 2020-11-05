#include <stdio.h>
#include "msg.h"
int main() {
    set_message("It is my first program");
    printf("%s\n", get_message());
    return 0;
}
