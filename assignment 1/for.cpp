https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
#include <iostream>
using namespace std;

int main() {
    // Complete the code.
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a>>b;
    while(a!=(b+1))
    {
    if (a>=1 && a<=9)
    {
        cout<<arr[a-1]<<endl;
    }
    else if (a>9 && a%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    a++;
    }
    return 0;
}
