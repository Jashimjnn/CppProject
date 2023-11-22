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
    int cnt[26]={0};
    for(char x : str)
    {
        cnt[x-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        for(int j=0;j<cnt[i-'a'];j++)
        {
            cout<<i;
        }
    }
    return 0;
}