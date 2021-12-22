// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS   // Nicht ständig z.B. scanf() "anmeckern",
                                  // auch falls additional Security
                                  // Development Lifecycle (SDL) checks
                                  // aktiviert sein sollten /sdl .
#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <locale.h>               // wegen setlocale()
#include <iostream>
using namespace std;

// TODO: reference additional headers your program requires here

#include "printWorld.h"

void moveKnight(char world[][8], struct position *pos, char input);


struct position
{
    int x;
    int y;
};
