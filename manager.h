#ifndef manager_h
#define manager_h

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

#include "menu.h"

class manager{
public:
    void init();
private:
};

void FixConsoleWindow();
void remove_scrollbar();

#endif // manager_h
