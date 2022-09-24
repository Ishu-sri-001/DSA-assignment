//https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
#include <stdio.h>
int main() 
{
    char ch;
    char a[100];
    char b[200];
    scanf("%c",&ch);
    scanf("%s",a);
    scanf("\n") ;
    scanf("%[^\n]%*c",b);
    printf("%c\n",ch);
    printf("%s\n",a);
    printf("%s",b);
     return 0;
}
