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
        ll n,m;
        cin>>n>>m;
        if(n*2>m)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            cout<<n<<" "<<2*n<<endl;
        }
    }
    return 0;
}