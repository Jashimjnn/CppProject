#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin>>t;
    int ans=0;
    int mx=INT_MIN;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        ans-=a;
        ans+=b;
        mx=max(mx,ans);
    }
    cout<<mx<<endl;
    return 0;
}