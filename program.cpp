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
