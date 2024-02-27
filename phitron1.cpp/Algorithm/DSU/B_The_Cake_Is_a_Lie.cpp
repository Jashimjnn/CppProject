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
        ll n,m,k;
        cin>>n>>m>>k;
        if((n*m)-1==k)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}