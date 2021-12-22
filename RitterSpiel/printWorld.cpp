#include "stdafx.h"

void printWorld(char world[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf(" %c ", world[i][j]);
        }
        printf("\n");
    }
}
