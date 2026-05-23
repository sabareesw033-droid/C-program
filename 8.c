#include <stdio.h>
float multi(float i1,float i2,float i3)
{
    return(i1*i2*i3);
}
int main()
 {
    printf("multiply is %.2f\n",multi(4,6,7));
    printf("multiply is %.3f",multi(22,6,27));
    
}