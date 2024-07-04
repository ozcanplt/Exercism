#include <stdio.h>
#include <math.h>
#include "darts.h"
int score(coordinate_t point)
{   
    int player_score = 0;
    float len = sqrt(pow(point.posx,2) + pow(point.posy,2));
    if (len <= 1.0f)
    {   
        player_score = 10;
        return player_score;
    }
    if (len <= 5.0f)
    {
        player_score = 5;
        return player_score;
    }
    if (len <= 10.0f)
    {
        player_score = 1;
        return player_score;
    }
    else
    {
        return 0;
    }
}
