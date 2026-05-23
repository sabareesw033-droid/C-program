#include <stdio.h>
#include <math.h>
float add(float a,float b,float c,float d){
    return (a+b+c+d);
}float sub(float a,float b,float c,float d){
    return (a-b-c-d);
}float mul(float a,float b,float c,float d){
    return (a*b*c*d);
}float div(float a,float b,float c,float d){
    return (a/b/c/d);
}float power(float a,float b,float c,float d){
    return ((pow(a,b))+(pow(c,d)));
}

int main() {

    float a,b,c,d;
    printf("Enter the Number 1 : ");
    scanf("%f",&a);
    printf("Enter the Number 2 : ");
    scanf("%f",&b);
    printf("Enter the Number 3 : ");
    scanf("%f",&c);
    printf("Enter the Number 4 : ");
    scanf("%f",&d);

    printf("The Addition of %f + %f + %f + %f = %.3f\n\n",a,b,c,d,add(a,b,c,d));
    printf("The Subraction of %f - %f - %f - %f = %.3f\n\n",a,b,c,d,sub(a,b,c,d));
    printf("The Multiple of %f * %f * %f * %f = %.3f\n\n",a,b,c,d,mul(a,b,c,d));
    printf("The Division of %f / %f / %f / %f = %.3f\n\n",a,b,c,d,div(a,b,c,d));
    printf("The Power of (%f^%f) + (%f^%f) = %.3f\n\n",a,b,c,d,power(a,b,c,d));


    return 0;
}