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
    char ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
    }
    if(n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[ch[i]-'a']++;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (cnt[ch[i]-'a'] == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}