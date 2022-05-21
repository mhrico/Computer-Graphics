#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>

int x[4],y[4];

void curveBezier()
{


    double put_x,put_y,t;
    initwindow(500, 500);



    for(t=0.0;t<=1.0;t=t+0.001)
    {
        put_x = pow(1-t,3)*x[0] + 3*t*pow(1-t,2)*x[1] + 3*t*t*(1-t)*x[2] + pow(t,3)*x[3];
        put_y =  pow(1-t,3)*y[0] + 3*t*pow(1-t,2)*y[1] + 3*t*t*(1-t)*y[2] + pow(t,3)*y[3];

        putpixel(put_x,put_y, WHITE);
    }


}
int main()
{

    printf("Program for Bezier curve with 4 control points \n");

    for(int i=0; i<4; i++)
    {
        printf("x and y for Control point %d = ", i+1);
        scanf("%d %d",&x[i],&y[i]);
    }

    curveBezier(); // For testing: 200, 300; 300, 400; 300, 300; 100, 200
    getch();
    return 0;
}
