#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,d;
        cin>>n>>x>>d;
        int ans = (n/(5*x))+d;
        cout<<ans<<endl;
    }
}