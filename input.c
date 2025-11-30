#include <stdio.h>
#include <stdlib.h>

#include "input.h"
#include "utils.h"

Weather* allocate_weather(int n) {
    Weather *w = malloc(n * sizeof(Weather));
    if (!w) {
        printf("ERROR: Memory allocation failed.\n");
        exit(1);
    }
    return w;
}

float get_float_input(const char *label) {
    float value;
    while (1) {
        printf("%s", label);
        if (scanf("%f", &value) == 1)
            break;

        printf("Invalid input! Please enter a number.\n");
        clear_buffer();
    }
    return value;
}

void read_weather_data(Weather *w, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n------ Hour %d ------\n", i + 1);
        w[i].temp = get_float_input("Temperature: ");
        w[i].humid = get_float_input("Humidity: ");
        w[i].press = get_float_input("Pressure: ");
    }
}
