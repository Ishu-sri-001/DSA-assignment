//https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    int b[3];
    int s1=0,s2=0;
    for (int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for (int i=0;i<3;i++)
    {
        if (a[i]>b[i])
        {
         s1++;   
        }
        else if (a[i]<b[i])
        {
            s2++;
        }
        else {
        continue;
        }
        }
        cout<<s1<<" "<<s2;
        return 0;
    }
