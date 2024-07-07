#include "robot_simulator.h"
#include <stdio.h>
robot_status_t robot_create(robot_direction_t direction, int x, int y)
{
    direction = direction;
    robot_position_t robot_pos;
    robot_pos.x = x;
    robot_pos.y = y;
    robot_status_t robot_status;
    robot_status.direction = direction;
    robot_status.position = robot_pos;
    return robot_status;
}
void robot_move(robot_status_t *robot, const char *commands)
{
    while (*commands)
    {   //left = -1 Right = 1
        if (*commands == 'R')
        {
            robot->direction = (robot->direction + 1) % DIRECTION_MAX;
        }
        if (*commands == 'L')
        {
            robot->direction = (robot->direction + DIRECTION_MAX - 1) % DIRECTION_MAX;
        }
        if (*commands == 'A')
        {
            if(robot->direction == DIRECTION_NORTH)
            {
                robot->position.y++;
            }
            if(robot->direction == DIRECTION_SOUTH)
            {
                robot->position.y--;
            }
            if(robot->direction == DIRECTION_WEST)
            {
                robot->position.x--;
            }
            if(robot->direction == DIRECTION_EAST)
            {
                robot->position.x++;
            }
        }
        commands++;
    }   
}
