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
        string str[3][n];
        map<string,ll>mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
              cin>>str[i][j];
              mp[str[i][j]]++;
            }
        }
        for(int i=0;i<3;i++)
        {
            ll cnt=0;
            for(int j=0;j<n;j++)
            {
                if(mp[str[i][j]]==1)
                {
                  cnt+=3;
                }
                else if(mp[str[i][j]]==2)
                {
                    cnt++;
                }
            }
           cout<<cnt<<" ";
        }
        cout<<endl;
    }
    return 0;
}