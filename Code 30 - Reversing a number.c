///Reversing a number.
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int reverse=0;
    while(num!=0) {
        reverse=(reverse*10)+(num%10);
        num/=10;
    }

    printf("Reversed = %d\n",reverse);

    return 0;
}
