 ///Printing A to Z using loops.

 #include<stdio.h>

int main()
{
    char x='Z';
    int i;

    for(i='A'; i<=x; i++) //for loop

    {
        printf("%c\n",i);
    }

    /*char x='A';

    while(x<='Z') //while loop

    {
        printf("%c\n",x);

        x++;
    }

    char x='A';

    do
    {
        printf("%c\n",x); //do-while loop
        x++;
    }
    while(x<='Z');*/

    return 0;
}
