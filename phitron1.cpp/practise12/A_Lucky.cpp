#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout << "YES" << endl;
#define n cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int sum = 0;
        int sum1 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += str[i];
        }
        for (int i = 3; i < 6; i++)
        {
            sum1 += str[i];
        }
        if (sum == sum1)
        {
            y;
        }
        else
        {
            n;
        }
    }
    return 0;
}