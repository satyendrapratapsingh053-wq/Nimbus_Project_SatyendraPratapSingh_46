#ifndef WEATHER_H
#define WEATHER_H

// Structure for storing hourly weather data
typedef struct {
    float temp;
    float humid;
    float press;
} Weather;

// Global constant
extern int GLOBAL_HOURS;

#endif
