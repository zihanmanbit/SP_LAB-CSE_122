#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ///way 1
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a vowel.\n",ch);
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("%c is a consonant.\n",ch);
    else
        printf("%c is not an alphabet.\n",ch);
    ///way 2
    /*char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    int flag=0;
    for(int i=0;i<10;i++) {
        if(ch==vowel[i])
            flag=1;
    }
    if(flag==1)
        printf("%c is a vowel.\n",ch);
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("%c is a consonant.\n",ch);
    else
        printf("%c is not an alphabet.\n",ch);*/

    return 0;
}
