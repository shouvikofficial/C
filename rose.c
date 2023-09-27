//This program will create a flower during execution
#include <stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int i,gdriver=DETECT,gmode=4;
 initgraph(&gdriver,&gmode,"c:\tc\bgi");
 setcolor(RED);
 circle(230,200,40);
 arc(260,160,290,180,32);
 arc(285,219,202,118,32);
 arc(232,255,140,50,30);
 arc(180,222,75,338,32);
 arc(195,160,0,263,32);
 arc(100,255,300,0,162);
 arc(102,275,300,12,164);
 outtextxy(100,425," ***  This program is made by Siddy Koool  ***");
 getch();
}
