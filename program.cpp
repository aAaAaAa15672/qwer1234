#include "graphics.h"
#include "picture.hpp"


void house(int x, int y, int h){
   setfillstyle(SOLID_FILL, COLOR(128,64,48));
   bar(x,y,x+100,y+100);
   //treug(x-50,y,200, RED);
   setfillstyle(BKSLASH_FILL, WHITE);
   bar(x+33, y+33, x+66, y+66);
}


void treug_fence(int x,int y,int a){
    int v[]={x,y,x+a/2,y-a/2,x+a,y};
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, COLOR(218, 165,32));
    fillpoly(3, v);
}
void doska(int q, int w, int e, int r, int t, int y, int u){
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, COLOR(218, 165,32));
    treug_fence(q, w, e);
    bar(r, t, y, u);
}
void fence(){
    int i,j = 15;
    for(i = 0;i <= 1280; i += 25){
        doska(i, 400, 15, i, 400, j, 500);
        j += 25;
    }
    bar(0, 460, 1280, 468);
    bar(0, 425, 1280, 433);
}

int main(){ 
    initwindow(800,600);
    house(); // дом
    sun(); // солнце
    man(); // человек
    fence(); // забор
    getch();
    closegraph();
}
