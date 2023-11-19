#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str, str1, str2;
        cin>>str;
        char cnt[26] = {0};
        for (int i = 0; i < n; i++)
        {
            int val = str[i] - 'a';
            cnt[val]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(cnt[str[i]-'a']%2!=0)
            {
                count++;
            }
        }
        int tmp = count-k;
        if(tmp>=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       
    }
}