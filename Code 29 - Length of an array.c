///Determining Length of an array.
#include<stdio.h>
int main()
{
    int arr[]={1,2,4,6,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("Length of the array is %d.\n",size);

    return 0;
}
