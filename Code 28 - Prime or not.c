#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    if(n==1 || n==0)
    flag=1;
    else {
        for(i=2;i<n;i++) {
            if(n%i==0)
                flag=1;
        }
    }
    if(flag==1)
        printf("%d is not a prime number.\n",n);
    else
        printf("%d is a prime number.\n",n);

    return 0;
}
