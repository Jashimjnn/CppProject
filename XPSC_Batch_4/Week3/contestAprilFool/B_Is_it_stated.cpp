#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim()
{
    string str;
    cin >> str;
    bool flag = false;
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] == 'i' && str[i + 1] == 't')
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        Y;
    }
    else
    {
        N;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Jashim();
    }
    return 0;
}