#include<stdio.h>
int main()
{
    char letters[]={'a','X','B','y','Z','c','f','j','U'};
    int sm=0,cap=0;
    for(int i=0;i<9;i++) {
        if(letters[i]>='a' && letters[i]<='z')
            sm++;
        else if(letters[i]>='A' && letters[i]<='Z')
            cap++;
    }
    printf("No. of Capital letters=%d\nNo. of Small letters=%d\n",cap,sm);

    return 0;
}
