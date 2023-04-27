#include "graphics.h"
#include "picture.hpp"

void house(int x, int y, int h){
   setfillstyle(SOLID_FILL, COLOR(128,64,48));
   bar(x,y,x+100,y+100);
   //treug(x-50,y,200, RED);
   setfillstyle(BKSLASH_FILL, WHITE);
   bar(x+33, y+33, x+66, y+66);
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
