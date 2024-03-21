#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool valid(vector<ll>&v)
{
    return v==vector<ll>(26,0);
}
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    vector<ll>v(26,0);
    for(int i=0;i<str2.size();i++)
    {
        v[str2[i]-'a']++;
    }
    ll lft=0,rght=0;
    ll cnt=0;
    while(rght<str1.size())
    {
        ll x = str1[rght]-'a';
        v[x]--;
        if((rght-lft+1)==str2.size())
        {
            if(valid(v))
            {
                cnt++;
            }
            v[str1[lft]-'a']++;
            lft++;
        }
        rght++;
    }
    cout<<cnt<<endl;
    return 0;
}