#include <stdio.h>

int add(int num1,int num2) //declaring function
{
    return num1+num2;
}

int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=add(a,b); //summation using function
    printf("The sum is %d.\n",sum);

    return 0;
}
