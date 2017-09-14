#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = r, y = 0;

    cout << "(" << x + x_centre << ", " << y + y_centre << ") ";
    if (r > 0)
    {
        putpixel(x+x_centre, -y+y_centre, WHITE);
        putpixel(y+y_centre, x+x_centre, WHITE);
        putpixel(-y+y_centre, x+x_centre, WHITE);
    }

    int P = 1 - r;
    while (x > y)
    {
        y++;

        if (P <= 0)
            P = P + 2*y + 1;
        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }

        if (x < y)
            break;
        putpixel(x+x_centre, y+y_centre, RED);
        putpixel(-x+x_centre, y+y_centre, RED);
        putpixel(x+x_centre, -y+y_centre, RED);
        putpixel(-x+x_centre, -y+y_centre, RED);


        if (x != y)
        {
            putpixel(y+y_centre, x+x_centre, WHITE);
            putpixel(-y+y_centre, x+x_centre, WHITE);
            putpixel(y+y_centre, -x+x_centre, WHITE);
            putpixel(-y+y_centre, -x+x_centre, WHITE);

        }
    }
}

int main()
{
    int gd= DETECT ,gm;
    initgraph(&gd,&gm,"");
    midPointCircleDraw(100, 100, 100);
    getch();
    closegraph();
    return 0;
}
