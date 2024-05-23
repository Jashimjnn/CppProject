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
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        ll cnt=0;
        for(int i=1;i<n;i++)
        {
            if(str[i]!=str[i-1])
            {
                cnt++;
            }
        }
        cout<<(cnt+1)/2<<endl;
    }
    return 0;
}
