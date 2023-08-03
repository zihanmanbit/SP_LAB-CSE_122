#include <stdio.h>

void swap(int a,int b) //swap using function
{
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping, a=%d & b=%d.\n",a,b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);

    /*int temp=a; //swap using variable
    a=b;
    b=temp;
    printf("After swapping, a=%d & b=%d.\n",a,b);*/

    return 0;
}
