#include "queen_attack.h"
#include <stdio.h>
#include <stdlib.h>
//abs(row - row) == abs(column - column)
int is_valid_position(position_t pos)
{
    return (pos.row < 8 && pos.column < 8);
}
attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    int test_rows = queen_1.row - queen_2.row;
    int test_columns = queen_1.column - queen_2.column;
    int test_diagonal = abs(test_rows) - abs(test_columns);
    if (!is_valid_position(queen_1) || !is_valid_position(queen_2))
    {
        return INVALID_POSITION;
    }
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column)
    {
        return INVALID_POSITION;
    }
    if (!test_rows || !test_columns || !test_diagonal)
    {
        return CAN_ATTACK;
    }
    else
    {
        return CAN_NOT_ATTACK;
    }
}
