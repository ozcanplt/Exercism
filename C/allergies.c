#include "allergies.h"
bool is_allergic_to(allergen_t allergen, int score)
{
    return (bool)(score & (1 << allergen));
}
allergen_list_t get_allergens(int score)
{
    allergen_list_t result = {0};
    for(int i = 0; i < ALLERGEN_COUNT; i++)
    {
        if ((score & (1 << i)) != 0)
        {
            result.allergens[i] = true;
            result.count++;
        }
    }
    return result;
}
