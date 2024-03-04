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
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        ll ans = str[n-1]-'a'+1;
        cout<<ans<<endl;
    }
    return 0;
}