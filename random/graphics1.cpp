#include<graphics.h>
#include<conio.h>
int main()
{
    int gd= DETECT ,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    circle(200,200,40);
    getch();
    return 0;

}
