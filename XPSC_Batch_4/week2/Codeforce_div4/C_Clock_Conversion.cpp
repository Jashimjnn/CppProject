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
    ll ans = stoi(str.substr(0, 2));
    if (ans == 0)
    {
        cout << "12"
             << ":" << str.substr(3, 2) << " AM" << endl;
    }
    else if (ans < 12)
    {
        cout << str.substr(0, 2) << ":" << str.substr(3, 2) << " AM" << endl;
    }
    else if (ans == 12)
    {
        cout << "12"
             << ":" << str.substr(3, 2) << " PM" << endl;
    }
    else
    {

        ll flag = ans - 12;
        if (flag < 10)
        {
            cout << "0" << flag << ":" << str.substr(3, 2) << " PM" << endl;
        }
        else
        {
            cout << flag << ":" << str.substr(3, 2) << " PM" << endl;
        }
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