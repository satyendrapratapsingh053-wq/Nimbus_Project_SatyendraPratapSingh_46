#include <stdio.h>
#include "analysis.h"
#include "utils.h"

float calc_avg_temp(Weather *w, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += w[i].temp;
    return sum / n;
}

float calc_avg_humid(Weather *w, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += w[i].humid;
    return sum / n;
}

float calc_avg_press(Weather *w, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += w[i].press;
    return sum / n;
}

int check_alerts(Weather *w, int n) {
    int alerts = 0;

    print_header("Alert Check");

    for (int i = 0; i < n; i++) {
        if (w[i].temp > 35) {
            printf("[TEMP ALERT] Hour %d: %.1f°C\n", i + 1, w[i].temp);
            alerts++;
        }
        if (w[i].humid > 80) {
            printf("[HUMIDITY ALERT] Hour %d: %.1f%%\n", i + 1, w[i].humid);
            alerts++;
        }
        if (w[i].press > 1015) {
            printf("[PRESSURE ALERT] Hour %d: %.2f\n", i + 1, w[i].press);
            alerts++;
        }
    }

    if (alerts == 0) {
        printf("No alerts found in %d hours.\n", n);
    }

    return alerts;
}
