/*------------------------------------------------------------------------------
 *
 *  Copyright (C) 2018  by  CatHas4Paw
 *
 *  Date:               16.10.2018 13:40:10
 *  Version: 1.0        File(s): -->RitterSpiel.cpp
 *-----------------------------------------------------------------------------*/

#include "stdafx.h" 

int _tmain(int argc, _TCHAR* argv[], _TCHAR** envp)
{setlocale(LC_CTYPE, "German");

char SpielFeld[8][8];
//   SpielFeld[i][j]

struct position pos;
pos.x = 0;
pos.y = 0;

char input;


for (int i = 0; i < 8; i++)
{
    for (int j = 0; j < 8; j++)
    {
        SpielFeld[i][j] = { '0' };
    }
}
SpielFeld[0][0] = { 'R' };
SpielFeld[4][4] = { 'D' };
do
{
    printWorld(SpielFeld);
    printf("\n\n\n");

    cin >> input;


    moveKnight(SpielFeld, &pos, input);
} while (input != 'x');

    return 0;
}

