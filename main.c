#include <stdio.h>
#include <stdlib.h>

#include "weather.h"
#include "input.h"
#include "analysis.h"
#include "utils.h"

int main() {
    int n = GLOBAL_HOURS;

    print_header("Weather Monitoring System V2");

    Weather *w = allocate_weather(n);

    read_weather_data(w, n);

    print_header("Results");

    float avgT = calc_avg_temp(w, n);
    float avgH = calc_avg_humid(w, n);
    float avgP = calc_avg_press(w, n);

    printf("Hours Monitored : %d\n", n);
    printf("Avg Temperature : %.2f°C\n", avgT);
    printf("Avg Humidity    : %.2f%%\n", avgH);
    printf("Avg Pressure    : %.2f\n", avgP);

    check_alerts(w, n);

    free(w);

    print_header("End of Program");

    return 0;
}
