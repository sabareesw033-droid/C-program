#include <stdio.h>
int main() {
    /* calculatin area of a circle */
    /* formula is pi*sqr(r) */

    float pi = 3.14519;

    float volume;

    int r;

    float area;

    printf("what is the radius  ");

    scanf("%d",&r);

    area=pi*r*r;

    printf("the value of the circle with radius %d is %f\n",r,area);

    volume = (4/3)*pi*r*r*r;

    printf("the area of volume sphere for given  r = %d is =%.2f\n",r,volume);

    printf("the area of volume sphere for given  r = %d is =%.3f",r,volume);




}