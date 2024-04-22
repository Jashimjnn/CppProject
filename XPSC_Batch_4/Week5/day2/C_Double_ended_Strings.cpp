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
        string str,str1;
        cin>>str>>str1;
        ll n = str.size();
        ll m = str1.size();
        ll mx = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                string tmp = str.substr(i,j);
                if(str1.find(tmp)!=-1)
                {
                    mx = max(mx,(ll)tmp.size());
                }
            }
        }
        cout<<(n+m)-2*mx<<endl;
    }
    return 0;
}