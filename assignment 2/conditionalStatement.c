//https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
#include <stdio.h>
int main() 
{
    int a;
    scanf("%d\n", &a);
    char *st[9]={"one","two","three","four","five","six","seven","eight","nine"};
        if (a<=9) {
        printf(st[a-1]);
        printf("\n"); }
        else
        printf("Greater than 9");
    return 0;
}

