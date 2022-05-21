#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#define color WHITE

void lineBres(int xa, int ya, int xb, int yb)
{
    initwindow(500, 500);
    int dx = abs(xa - xb), dy = abs(ya - yb);
    int p = 2 * dy - dx;
    int twoDy = 2 * dy, twoDyDx = 2 * (dy - dx);
    int x, y, xEnd;

    if(xa > xb)
    {
        x = xb;
        y = yb;
        xEnd = xa;
    }
    else
    {
        x = xa;
        y = ya;
        xEnd = xb;
    }

    putpixel(x, y, color);

    while(x < xEnd)
    {
        x++;
        if(p < 0)
            p += twoDy;
        else
        {
            y++;
            p += twoDyDx;
        }
        putpixel(x, y, color);
    }

}

int main()
{
    int xa, ya, xb, yb;
    printf("xa ya xb yb = \n");
    scanf("%d %d %d %d", &xa, &ya, &xb, &yb);
    lineBres(xa, ya, xb, yb); // For testing: 200, 100, 300, 180
    getch();
    return 0;
}
