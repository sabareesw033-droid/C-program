#include <stdio.h>

    float a,b,c;
    void dummy(void);

    int main()
    {
        static float a;
    }
    void dummy(void)
    {
        static int a;
        int b;
    }
    
