//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,dig;
    int sum=0;
    scanf("%d", &n);
    while(n!=0)
    {
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    printf("%d" ,sum);
    return 0;
}
