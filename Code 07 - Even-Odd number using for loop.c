///Print all even/odd numbers between 1-150.

#include<stdio.h>

int main()
{
    int i;
    for(i=1; i<=150; i++)
    {
        if(i%2==0)
        //if(i%2==1)
            printf("%d ",i);
    }
    return 0;
}
