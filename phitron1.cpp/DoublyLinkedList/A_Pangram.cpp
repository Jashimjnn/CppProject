#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin >> n;
    string str;
    cin>>str;
    for (int i = 0; i <str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    int cnt[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        cnt[str[i]-'a']++;
    }
    int ans=0;
    for(int i=0;i<str.size();i++)
    {
        if(cnt[str[i]-'a']!=0)
        {
           // cout<<str[i]<<" :"<<cnt[str[i]-'a']<<endl;
            ans++;
        }
        cnt[str[i]-'a']=0;
    }
    //cout<<ans<<endl;
    if(ans==26)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}