#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool display()
{
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll mn;
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        mn=min(b,abs(v[i]-flag)*a);
        f-=mn;
        flag=v[i];
    }
    return (f>0);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        bool flag = display();
        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}