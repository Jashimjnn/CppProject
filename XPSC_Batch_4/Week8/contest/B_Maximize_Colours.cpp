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
        vector<ll>v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll cnt=0;
        for(int i=0;i<3;i++)
        {
            if(v[i]>0)
            {
                cnt++;
                v[i]--;
            }
        }
        if(v[0]>0 && v[1]>0)
        {
            cnt++;
            v[0]--;
            v[1]--;
        }
        if(v[1]>0 && v[2]>0)
        {
            cnt++;
            v[1]--;
            v[2]--;
        }
        if(v[0]>0 && v[2]>0)
        {
            cnt++;
            v[0]--;
            v[2]--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}