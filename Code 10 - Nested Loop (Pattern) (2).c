#include<stdio.h>

int main()
{
    int i,j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=3; j++) //5x3
        {
            printf("*",j);
        }
        printf(" \n");
    }
    return 0;
}
