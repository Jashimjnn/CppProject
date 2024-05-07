#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==2)
        {
            cout<<2<<" "<<4<<endl;
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i*2<<" ";
        }
        cout<<endl;
    }
    return 0;
}