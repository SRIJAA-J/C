#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(BLACK);
//arc
arc(160,150,20,10,20);
arc(340,150,20,10,20);
//small circles
setcolor(YELLOW);
circle(160,140,30);
setcolor(YELLOW);
circle(340,140,30);
setcolor(YELLOW);
circle(245,195,10);
setcolor(YELLOW);
//arc
arc(250,250,190,10,40);
//big circle
circle(250,180,150);
getch();
}