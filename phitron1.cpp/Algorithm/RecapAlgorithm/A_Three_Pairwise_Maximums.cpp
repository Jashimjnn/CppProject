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
        sort(v.begin(),v.end());
        if(v[1]!=v[2])
        {
            N;
        }
        else
        {
            Y;
            cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
        }
    }
    return 0;
}