///Determine the greatest number between any 3 numbers.

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        max=a;
    else if(b>=a && b>=c)
        max=b;
    else if(c>=a && c>=b)
        max=c;

    printf("%d is the greatest number.\n",max);

    return 0;
}
