#include "stdafx.h"

void moveKnight(char world[][8], position * pos, char input)
{
    world[pos->y][pos->x] = '0';
    switch (input)
    {
        case ('w'):
        {
                pos->y = pos->y - 1;

            if (pos->y < 0)
            {
                pos->y = 7;
            }
            break;
        }
        case ('a'):
        {
            pos->x = pos->x - 1;

            if (pos->x < 0)
            {
                pos->x = 7;
            }
            break;
        }
        case ('s'):
        {
            pos->y = pos->y + 1;

            if (pos->y > 7)
            {
                pos->y = 0;
            }
            break;
        }
        case ('d'):
        {
            pos->x = pos->x + 1;

            if (pos->x > 7)
            {
                pos->x = 0;
            }
            break;
        }
    }
    world[pos->y][pos->x] = 'R';
}
