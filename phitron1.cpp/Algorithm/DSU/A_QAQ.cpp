#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin>>str;
    ll cnt=0;
    ll x=0,y=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='Q')
        {
            cnt+=y;
            x++;
        }
        if(str[i]=='A')
        {
            y+=x;
        }
    }
    cout<<cnt<<endl;
    return 0;
}