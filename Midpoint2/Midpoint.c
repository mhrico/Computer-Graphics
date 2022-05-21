#include <graphics.h>
#include <stdio.h>
#define color WHITE

void circleMidpoint(int xCenter, int yCenter, int radius)
{
    initwindow(500, 500);
    int x = 0;
    int y = radius;
    int p = 1 - radius;
    void circlePlotPoints(int, int, int, int);

    circlePlotPoints(xCenter, yCenter, x, y);

    while(x < y)
    {
        x++;
        if(p < 0)
            p += 2 * x + 1;
        else
        {
            y--;
            p += 2 * (x - y) +1;
        }
        circlePlotPoints(xCenter, yCenter, x, y);
    }
}

void circlePlotPoints(int xCenter, int yCenter, int x, int y)
{
    putpixel(xCenter + x, yCenter + y, color);
    putpixel(xCenter - x, yCenter + y, color);
    putpixel(xCenter + x, yCenter - y, color);
    putpixel(xCenter - x, yCenter - y, color);

    putpixel(xCenter + y, yCenter + x, color);
    putpixel(xCenter - y, yCenter + x, color);
    putpixel(xCenter + y, yCenter - x, color);
    putpixel(xCenter - y, yCenter - x, color);
}

int main()
{
    int xCenter, yCenter, radius;
    printf("Enter xCenter yCenter Radius = ");
    scanf("%d %d %d", &xCenter, &yCenter, &radius);
    circleMidpoint(xCenter, yCenter, radius); // For testing: 250, 250, 100
    getch();
    return 0;
}

