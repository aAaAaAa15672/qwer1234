#include "graphics.h"
#include "picture.hpp"

void sun()
{
setcolor(YELLOW);
setfillstyle(SOLID_FILL, YELLOW);
line(400,120,600,120);
line(420,200,580,50);
line(420,50,580,200);
line(500,20,500,220);
fillellipse(500, 120, 50, 50);
}

int main()
{ initwindow(800,600);
 house(); // дом
 sun(); // солнце
 man(); // человек
 fence(); // забор
 getch();
 closegraph();
}
