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
        vector<ll>v;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='L')
            {
                v.push_back((n-1-i)-i);
                sum+=i;
            }
            else
            {
                v.push_back(i-(n-1-i));
                sum+=(n-1-i);
            }
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++)
        {
            if(v[i]>0)
            {
                sum+=v[i];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}