#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    float mark[size];

    for(int i=1;i<=size;i++)
            scanf("%f",&mark[i]);
            //mark[i]=56;
    for(int i=1;i<=size;i++) {
    printf("Mark[%d]=%.2f\n",i,mark[i]);
    }

    return 0;
}
