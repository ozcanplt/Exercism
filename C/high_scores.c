#include "high_scores.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
int32_t latest(const int32_t *scores, size_t scores_len) 
{
    int32_t last_score = *(scores + (scores_len-1));
    return last_score;
}
int32_t personal_best(const int32_t *scores, size_t scores_len)
{
    int32_t high_score = scores[0];
    for(size_t i = 1; i < scores_len; i++)
    {
        if (scores[i] > high_score)
        {
            high_score = scores[i];
        }    
    }
    return high_score;
}
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output)
{
    int32_t top_scores[3] = {INT32_MIN,INT32_MIN,INT32_MIN};
    for (size_t i = 0; i < scores_len; i++)
    {
        if (scores[i] >top_scores[0])
        {
            top_scores[2] = top_scores[1];
            top_scores[1] = top_scores[0];
            top_scores[0] = scores[i];
        }
        else if (scores[i] > top_scores[1])
        {
            top_scores[2] = top_scores[1];
            top_scores[1] = scores[i];
        }
        else if (scores[i] > top_scores[2])
        {
            top_scores[2] = scores[i];
        }
    }
    size_t count = 0;
    for (size_t i = 0; i < 3; i++)
    {
        if (top_scores[i] != INT32_MIN)
        {
            output[count++] = top_scores[i];
        }
    }
    return count;
}
