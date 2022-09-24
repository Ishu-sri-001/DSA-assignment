//https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
#include <stdio.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *st[9]={"one","two","three","four","five","six","seven","eight","nine"};
    while(b>=a)
    {
        if (a<=9) {
        printf(st[a-1]);
        printf("\n"); }
        else if (a>9 && a%2==0)
        printf("even\n");
        else
        printf("odd\n");
        a++;
    }
    return 0;
}

