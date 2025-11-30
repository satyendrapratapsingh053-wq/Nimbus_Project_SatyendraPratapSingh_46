#ifndef INPUT_H
#define INPUT_H

#include "weather.h"
Weather* allocate_weather(int n);
void read_weather_data(Weather *w, int n);

float get_float_input(const char *label);

#endif
