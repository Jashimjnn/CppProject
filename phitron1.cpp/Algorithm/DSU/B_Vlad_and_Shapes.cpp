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
        ll mat[n][n];
        bool flag = false;
        
        set<ll>st;
        for (int i = 0; i < n; i++)
        {
            ll cnt=0;
            string str;
            cin>>str;
            for(int j=0;j<n;j++)
            {
                if(str[j]=='1')
                {
                    cnt++;
                }
            }
            if(cnt!=0)
            {
                st.insert(cnt);
            }
        }
        if(st.size()==1)
        {
            cout<<"SQUARE"<<endl;;
        }
        else
        {
            cout<<"TRIANGLE"<<endl;;
        }
        
    }
    return 0;
}