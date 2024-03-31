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
        string str[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            mp[str[i]] = true;
        }
        for(int i=0;i<n;i++)
        {
            bool flag = false;
            for(int j=1;j<str[i].size();j++)
            {
                string pre = str[i].substr(0,j);
                string suf = str[i].substr(j,str[i].size()-j);
                if(mp[pre] && mp[suf])
                {
                    flag = true;
                }
            }
            cout<<flag;
        }
        cout<<endl;
    }
    return 0;
}