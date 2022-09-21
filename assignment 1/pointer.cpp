https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
 #include <iostream>
using namespace std;
void update(int *a,int *b) {

int i,j;
i=*a+*b;
j=abs(*a-*b);
*a=i;
*b=j;

}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
