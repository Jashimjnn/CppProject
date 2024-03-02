#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 1;
        while(cnt<n)
        {
            cnt*=2;
            if(cnt>n)
            {
                cnt/=2;
                break;
            }
        }
       cout<<cnt<<endl;
    }
    return 0;
}