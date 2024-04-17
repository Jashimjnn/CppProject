#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(1000006);
    ll idx = 1;
    ll wrm;
    for(int i=1;i<=n;i++)
    {
        cin>>wrm;
        while(wrm--)
        {
            v[idx]=i;
            idx++;
        }
    }
    ll jce;
    cin>>jce;
    while(jce--)
    {
        cin>>wrm;
        cout<<v[wrm]<<endl;
    }
    return 0;
}