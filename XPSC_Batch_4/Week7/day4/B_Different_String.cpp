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
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str.size(); j++)
        {
            if (str[i] != str[j])
            {
                swap(str[i], str[j]);
                Y;
                cout << str << endl;
                return;
            }
        }
    }
    N;
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