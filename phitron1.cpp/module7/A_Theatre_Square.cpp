#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll ans = ((m+a-1)/a)*((n+a-1)/a);
    cout<<ans<<endl;
    return 0;
}