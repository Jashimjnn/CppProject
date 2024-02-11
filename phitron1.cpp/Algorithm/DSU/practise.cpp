#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; str[i]; i++)
    {

        if (i || str[i] < 57)
        {

            cout << min(str[i], char(105 - str[i]));
        }
        else
        {

            cout << str[i];
        }
    }
    return 0;
}
