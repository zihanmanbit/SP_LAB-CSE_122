#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=b;i>=a;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
