///Largest,Smallest,2nd Largest,2nd Smallest in an array.
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size], i;
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int mx = arr[0],mn=arr[0];
    for(i = 0; i < size; i++)
    {
        if(mx < arr[i])
            mx = arr[i];
        if(mn > arr[i])
            mn = arr[i];
    }
    printf("Largest=%d, Smallest=%d\n", mx,mn);

    int mx2=arr[0],mn2=arr[0];
    for(i = 0; i < size; i++)
    {
        if(arr[i]>mx2 && arr[i]!=mx)
            mx2=arr[i];
        if(arr[i]<mn2 && arr[i]!=mn)
            mn2=arr[i];
    }
    printf("2nd Largest=%d, 2nd Smallest=%d\n", mx2,mn2);
    return 0;
}
