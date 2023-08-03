#include<stdio.h>
int main()
{
    int a,b,c; //declaring three variables
    printf("Enter three numbers: \n");
    scanf("%d%d%d",&a,&b,&c); //taking 3 numbers as user input
    int sum=a+b+c; //calculating sum
    printf("The summation is: %d\n",sum); //printing result
    return 0;
}
