#include <stdio.h>
#include "utils.h"

void print_header(const char *title) {
    printf("\n---------------------------------\n");
    printf("        %s\n", title);
    printf("---------------------------------\n");
}

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
