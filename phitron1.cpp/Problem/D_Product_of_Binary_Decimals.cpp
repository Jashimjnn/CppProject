#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int> v = {10, 11, 100, 101, 110, 111, 1000, 1010, 1100, 1110, 1001, 1011, 1101, 1111, 10000, 10001, 10100, 10101, 11000, 11001, 11100, 11101, 10010, 10011, 10110, 10111, 11010, 11011, 11110, 11111};
bool fun(ll num)
{
    while (num != 0)
    {
        if (num % 10 > 1)
        {
            return false;
        }
        num = num / 10;
    }
    return true;
}
void Jashim()
{
    ll n;
    cin >> n;
    while (true)
    {
        if (fun(n))
        {
            Y;
            return;
        }
        bool flag = false;
        for (int i = 0; i < v.size(); i++)
        {
            if (n % v[i] == 0)
            {
                n /= v[i];
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            N;
            return;
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