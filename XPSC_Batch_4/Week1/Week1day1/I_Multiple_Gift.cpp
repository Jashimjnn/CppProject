#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll x, y;
    cin >> x >> y;
    ll cnt = 0;
    while (true)
    {
        if (x * 2 <= y && x * 2 > x)
        {
            x *= 2;
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}