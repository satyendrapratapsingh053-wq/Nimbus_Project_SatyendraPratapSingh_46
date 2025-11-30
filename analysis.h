#ifndef ANALYSIS_H
#define ANALYSIS_H
#include "weather.h"
float calc_avg_temp(Weather *w, int n);
float calc_avg_humid(Weather *w, int n);
float calc_avg_press(Weather *w, int n);
int check_alerts(Weather *w, int n);

#endif
