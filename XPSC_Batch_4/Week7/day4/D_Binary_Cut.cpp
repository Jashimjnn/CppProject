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
        string str;
        cin>>str;
        ll cnt=0;
        ll flag = false;
        if(is_sorted(str.begin(),str.end()))
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<str.size();i++)
        {
            if((str[i]!=str[i+1]))
            {
                cnt++;
            }
            if(str[i]=='0' && str[i+1]=='1')
            {
                flag = true;
            }
        }
        if(flag==true)
        {
            cout<<cnt-1<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }
    return 0;
}