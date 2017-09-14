#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int gd= DETECT ,gm;
    initgraph(&gd,&gm,"");
    int x1=0,x2=200,y1=0,y2=100,dx,dy,p,lc,i;
    float m,y,x;

    //cout<<x1<<x2<<y1<<y2;
    if(x2<x1)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    dx=x2-x1;
    dy=y2-y1;
    m=(float)dy/dx;
    x=x1;
    y=y1;
    p=2*dy-dx;
    putpixel(x,y,WHITE);
    for(i=1;i<=dx;i++)
    {

        if(p<0)
        {
            p=p+2*dy;
            x=x+1;
            putpixel(x,y,RED);
        }
        else{
            p=p+2*dy-2*dx;
            x=x+1;
            y=y+1;
            putpixel(x,y,RED);
        }
    }
    getch();
    closegraph();
    return 0;
}
