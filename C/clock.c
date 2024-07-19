#include "clock.h"
#include <stdbool.h>
#include <stdio.h>

#define MAX_STR_LEN sizeof("##:##")
typedef struct {
   char text[MAX_STR_LEN];
} clock_t;

clock_t clock_create(int hour, int minute)
{
    clock_t clock;
    if (minute < 0)
    {
    hour += minute / 60;
    minute = minute % 60;
    if (minute != 0) 
    {
        hour--;
        minute += 60;
    }
    }
    if (hour < 0)
    {
        hour %= 24;
        hour += 24;
    }
    hour += minute / 60;
    minute %= 60;
    hour %= 24;
    int result = snprintf(clock.text, MAX_STR_LEN, "%02d:%02d", hour, minute);
    if (result < 0 || (size_t)result >= MAX_STR_LEN) 
    {
        clock.text[0] = '\0';
    }
    return clock;
}
clock_t clock_add(clock_t clock, int minute_add)
{
    int hour, minute;
    sscanf(clock.text, "%d:%d", &hour,&minute);
    return clock_create(hour,minute +  minute_add);
}
clock_t clock_subtract(clock_t clock, int minute_subtract)
{
    int hour, minute;
    sscanf(clock.text, "%d:%d", &hour,&minute);
    return clock_create(hour,minute - minute_subtract);
}
bool clock_is_equal(clock_t a, clock_t b)
{
    int hour_a, minute_a;
    sscanf(a.text, "%d:%d", &hour_a,&minute_a);
    int hour_b, minute_b;
    sscanf(b.text, "%d:%d", &hour_b,&minute_b);
    if ((hour_a == hour_b)&&(minute_a == minute_b))
        return true;
    else
        return false;
}
