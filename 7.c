#include <stdio.h>
#include <string.h>
int main() {
    char a;
    int c;
    float s,f;

    a='A';
    c=215;
    s=10.35,f=32.33;

    printf("%c is store addr %u.\n",a,&a);
    printf("%d is store addr %u.\n",c,&c);
    printf("%f is store addr %u.\n",s,&s);
    printf("%f is store addr %u.\n",f,&f);

    
    printf("%c is store addr %u.\n",a,&a);
    printf("%d is store addr %u.\n",c,&c);
    printf("%f is store addr %u.\n",s,&s);
    printf("%f is store addr %u.\n",f,&f);

    
    printf("%c is store addr %u.\n",a,&a);
    printf("%d is store addr %u.\n"c,&c);
    printf("%f is store addr %u.\n",s,&s);
    printf("%f is store addr %u.\n",f,&f);

    printf("%c is store addr %u.\n",c,&c);
    printf("%d is store addr %u.\n"c,&c);
    printf("%f is store addr %u.\n",c,&c);
    printf("%f is store addr %u.\n",c,&c);
}