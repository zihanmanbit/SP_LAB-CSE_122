///Copying an array
#include<stdio.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int arr1[size],arr2[size];
    printf("Array1: ");
    for(i = 0; i < size; i++)
        scanf("%d", &arr1[i]);
    for(i = 0; i < size; i++)
        arr2[i]=arr1[i];
    printf("Array2: ");
    for(i = 0; i < size; i++)
        printf("%d ",arr2[i]);

    return 0;
}
