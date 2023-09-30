#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size], i;
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int sum=0;
    for(i = 0; i < size; i++)
    sum+=arr[i];
    printf("Sum=%d\n",sum);

    float avg=(float)sum/size;
    printf("Average=%f\n",avg);

    return 0;
}
