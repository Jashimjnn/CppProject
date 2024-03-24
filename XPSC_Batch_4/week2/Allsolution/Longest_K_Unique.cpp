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
    ll k;
    cin>>k;
    int lft=0,rght=0;
    int cnt=-1;
    map<char,int>mp;
    while(rght<str.size())
    {
        mp[str[rght]]++;
        while(mp.size()>k)
        {
            mp[str[lft]]--;
            if(mp[str[lft]]==0)
            {
                mp.erase(str[lft]);
            }
            lft++;
        }
        if(mp.size()==k)
        {
            cnt = max(cnt,rght-lft+1);
        }
        rght++;
    }
    cout<<cnt<<endl;
    return 0;
}