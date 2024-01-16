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
    char cnt[26]={0};
    for(int i=0;i<str.size();i++)
    {
      cnt[str[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
        {
            cout<<static_cast<char>(i+'a')<<" - "<<(int)cnt[i]<<endl;
        }
    }
    return 0;
}