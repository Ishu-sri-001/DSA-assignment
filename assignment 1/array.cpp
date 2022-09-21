//https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
#include <iostream>
using namespace std;
 
int main() {
    int l;
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    /*for (int j;j<a;j++){
    cout<<arr[j]<<" ";
    }
    cout<<endl;
    */
    int n=l;
    int arr1[l];
    for(int j=0;j<n;j++){
        arr1[j]=arr[l-1];
        cout<<arr1[j]<<" ";
        l--;
    }
 
    return 0;
}
