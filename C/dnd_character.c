#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
dnd_character_t make_dnd_character(void)
{
    dnd_character_t character;
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = ability();
    return character;
}
int modifier(int score)
{
    int modifier = floor(((score - 10) / 2));
    if ((score - 10) % 2 != 0)
    {
        if (score < 10)
            modifier--;
    }
    
    return modifier;
}
int ability(void)
{   
    int randomCount = 4;
    int randomNumbers[randomCount];
    srand(time(NULL));
    for (int i = 0; i < randomCount; i++)
    {
        randomNumbers[i] = (rand() % 6) + 1;
        //printf(" %d\t",randomNumbers[i]);
    }
    int min = randomNumbers[0];
    for (int i = 0; i < randomCount; i++)
    {
        if (randomNumbers[i]<min)
        {
            min = randomNumbers[i];
        }
    }
    int pre_ability = 0;
    for (int i = 0; i < randomCount; i++)
    {
        pre_ability += randomNumbers[i];
    }
    int ability = pre_ability - min;
    //printf("\nMin is %d\n",min);
    //printf("The pre_ability is %d\n",pre_ability);
    //printf("The final ability is %d\n",ability);
    return ability;
}
