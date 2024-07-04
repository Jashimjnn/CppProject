#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];
    while (cin.getline(s, 100005))
    {
        int cnt[26] = {0};
        for (int i = 0; i < strlen(s); i++)
        {
            int val = s[i] - 'a';
            cnt[val]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if(cnt[i]>0)
            {
                for(int j=0;j<cnt[i];j++)
                {
                    cout << char('a' + i);
                }
            }
        }
        cout << endl;
    }
    return 0;
}