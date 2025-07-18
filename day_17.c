/*
Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
*/

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x, &y);
    
    if(x>0 && y>0)
    {
        printf("Quadrant I");
    }
    else if(x<0 && y>0)
    {
      printf("Quadrant II");
    }
    else if(x<0 && y<0)
    {
        printf("Quadrant III");
    }
    else if(x>0 && y<0)
    {

        printf("Quadrant IV");
    }
    else if("x==0 && y==0")
    {
        printf("Origin");
    }

    return 0;
}