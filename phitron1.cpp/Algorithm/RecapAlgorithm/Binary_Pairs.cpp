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
        ll cnt1=0,cnt2=0;
        for(int i=0;i<n-1;i++)
        {
            if(str[i]=='1' && str[i+1]=='0')
            {
                cnt1++;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(str[i]=='0' && str[i+1]=='1')
            {
                cnt2++;
            }
        }
        cout<<(cnt1+cnt2)<<endl;
    }
    return 0;
}