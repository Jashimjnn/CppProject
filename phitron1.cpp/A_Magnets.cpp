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
    int  mx=0;
    int cnt=0,cnt1=0;
    int ar[n];
    set<int>s;
    for(int  i=0;i<n;i++)
    {
        cin>>ar[i];
        
    }
    for(int  i=0;i<n-1;i++)
    {
        cin>>ar[i];
        if(ar[i]!=ar[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}