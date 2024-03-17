#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 0; i <= c / b; i++)
    {
        if ((c - (b * i)) % a == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag==true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}