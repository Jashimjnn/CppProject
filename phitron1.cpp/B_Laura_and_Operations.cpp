#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display(ll i)
{
    ll a,b,c;
    cin>>a>>b>>c;
    if((b-c)%2==0)
    {
        cout<<1<<" ";
    }
    else
    {
        cout<<0<<" ";
    }
    if((a-c)%2==0)
    {
        cout<<1<<" ";
    }
    else
    {
        cout<<0<<" ";
    }
    if((a-b)%2==0)
    {
        cout<<1<<" ";
    }
    else
    {
        cout<<0<<" ";
    }
    cout<<endl;
}
int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        display(i);
    }
    return 0;
}