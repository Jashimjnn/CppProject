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
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        if(cnt1==cnt2)
        {
            cout<<"Possible"<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}