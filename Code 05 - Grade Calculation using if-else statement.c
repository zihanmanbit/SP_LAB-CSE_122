#include<stdio.h>
int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100)
        printf("You obtained A+.\n");
    else if(marks>=75 && marks<80)
        printf("You obtained A.\n");
    else if(marks>=70 && marks<75)
        printf("You obtained A-.\n");
    else if(marks>=65 && marks<70)
        printf("You obtained B+.\n");
    else if(marks>=60 && marks<65)
        printf("You obtained B.\n");
    else if(marks>=55 && marks<60)
        printf("You obtained B-.\n");
    else if(marks>=50 && marks<55)
        printf("You obtained C+.\n");
    else if(marks>=45 && marks<50)
        printf("You obtained C.\n");
    else if(marks>=40 && marks<45)
        printf("You obtained C-.\n");
    else if(marks<40 && marks>=0)
        printf("You failed (F).\n");
    else
        printf("Enter a valid number between 1-100.");

    return 0;
}
