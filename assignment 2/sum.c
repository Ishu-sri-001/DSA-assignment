//https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
#include <stdio.h>
int main()
{
	int a,b,sum1, dif1;
    float c,d, sum2, dif2;
    scanf("%d %d %f %f",&a,&b ,&c ,&d);
    sum1= a+b;
    dif1= a-b;
    sum2= c+d;
    dif2= c-d;
    printf("%d %d \n" ,sum1 ,dif1);
    printf("%0.1f %0.1f" ,sum2, dif2);
    return 0;
}
