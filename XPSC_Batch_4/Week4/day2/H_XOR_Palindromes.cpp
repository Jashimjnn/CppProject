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
        string str,str1;
        cin>>str;
        //reverse(str.begin(),str.end());
        string tmp = "";
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                tmp+='1';
            }
            else
            {
                tmp+='0';
            }
        }
        cout<<tmp<<endl;
    }
    return 0;
}