#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    printf("The sum is %d\n",sum);

    //float avg=sum/3.0; //3 is converted to float
    float avg=(float)sum/3; //sum is converted to float
    printf("The average is %f",avg);

    return 0;
}
