#include <conio.h>

#include <math.h>

#include <dos.h>

#include <stdlib.h>

#include <graphics.h>



int main()

{

 int x,y,r,midx,midy,color;

 float t;

 int gdriver=DETECT,gmode;

 initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

 midx=getmaxx()/2;

 midy=getmaxy()/2;

 r=10;

 color=12;

 setcolor(12);

 setfillstyle(1,12);

 settextstyle(0,0,3);

 do

 {

   outtextxy(midx-220,35,"I LOVE PROGRAMMING");

   outtextxy(midx-175,midy+180,"ROHIT TECH STUDY");

   for(t=0;t<(2*M_PI);t+=0.01)

   {

    x=(r*16*sin(t)*sin(t)*sin(t))+midx;

    y=(r*(1-2)*(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t)))+(midy-30);

    pieslice(x,y,0,360,5);

   }

   floodfill(midx,midy,color);

   delay(800);

   cleardevice();

   color=random(15)+1;

   setcolor(color);

   setfillstyle(1,color);

 }

 while(!kbhit());

 getch();

 closegraph();

 return 0;

}