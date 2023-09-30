#include<stdio.h>
int main()
{
    int a=5,b=10;
    int c=a&b;
    int d=a|b;
    int e=a>>1,f=b<<1;

    printf("c=%d, d=%d\ne=%d, f=%d\n",c,d,e,f);

    return 0;
}
