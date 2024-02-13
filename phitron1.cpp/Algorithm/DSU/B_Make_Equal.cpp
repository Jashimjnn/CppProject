#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (n == 1)
    {
        Y;
        return;
    }
    int x = sum / n;
    int y = 0;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= x)
        {
            y += (v[i] - x);
        }
        else
        {
            int z = (x - v[i]);
            if (y >= z)
            {
                y -= z;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }

    if (flag && y == 0)
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
    int t;
    cin >> t;
    while (t--)
    {
        display();
    }
    return 0;
}