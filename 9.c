#include <stdio.h>
#include<math.h>

float multi(float i1,float i2,float i3){
return(i1*i2*i3);

}

int add(int i1,int i2,int i3){
return(i1+i2+i3);

}

float subtract(float i1,float i2,float i3){
return(i1-i2-i3);

}

float divide(float i1,float i2,float i3){
return(i1/i2/i3);

}

float power_sum(float i1,float i2,float i3,float i4){
return(pow(i1,i2)) + (pow(i3,i4));

}

int main()
 {
    printf("multiply is %f \n",multi(4,6,7));
    printf("add is %d\n",add(22,6,27));
    printf("subtract is %f\n",subtract(22,6,27));
    printf("divide is %f\n",divide(22,6,27));
    printf("power is (%f^%f) + (%f^%f) \n",power_sum(22,6,27,32));



    
}