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
        string str;
        cin>>str;
        ll x = str[0]-'0'-1;
        ll z = str.size();
        ll y = (z*(z+1))/2;
        cout<<x*10+y<<endl;
    }
    return 0;
}