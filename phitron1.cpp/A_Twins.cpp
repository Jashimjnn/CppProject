#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sum=sum/2;
    sort(ar,ar+n);
    int cnt=0;
    for(int  i=n-1;i>=0;i--)
    {
        sum1+=ar[i];
         cnt++;
        if(sum1>sum)
        {
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}