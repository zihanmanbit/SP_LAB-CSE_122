///Write a code to print the following output: CSE1,CSE2,CS3,.......CSE100.

#include<stdio.h>

int main()
{
    int i=1;

    while(i<=100)
    {
        printf("CSE%d, ",i);
        i++;
    }
    return 0;
}
