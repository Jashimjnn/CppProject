#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    // string str;
    // cin>>str;
    int cnt[26]={0};
    for (int i = 0; i <n; i++)
    {
        char ch;
        cin>>ch;
        //int val = str[i] - 'a';
        cnt[(int)ch-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        // int val = str[i] - 'a';
        // if (cnt[val] != 0)
        // {
        //     //printf("%c", val + 'a');
        //     cout<<(char(val+97));
        // }
        // cnt[val] = 0;
        while(cnt[i]!=0)
        {
            cout<<(char(i+97));
            cnt[i]--;
        }
    }
    return 0;
}