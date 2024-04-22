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
    string str,str1;
    cin>>str>>str1;
    vector<ll>v(26,0);
    for(int i=0;i<str1.size();i++)
    {
        v[str1[i]-'a']++;
    }
    ll left=0,right=0;
    ll cnt=0;
    while(right<str.size())
    {
        ll flag = str[right]-'a';
        v[flag]--;
        if((right-left+1)==str1.size())
        {
            if(valid(v))
            {
                cnt++;
            }
            v[str[left]-'a']++;
            left++;
        }
        right++;
    }
    cout<<cnt<<endl;
    return 0;
}