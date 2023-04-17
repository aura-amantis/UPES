#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
float x1,x2,y1,y2;
 
void display(void)
{
float dy,dx,step,x,y,k,Xin,Yin;
dx=x2-x1;
dy=y2-y1;
 
if(abs(dx)> abs(dy))
{
step = abs(dx);
}
else
step = abs(dy);
 
Xin = dx/step;
Yin = dy/step;
 
x= x1;
y=y1;
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
 
for (k=1 ;k<=step;k++)
{
x= x + Xin;
y= y + Yin;
 
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
}
