#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display(int t)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool flag = true;
    int count = 0;
    int i = 0;
    while (i < n)
    {
        if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.')
        {
            flag = false;
        }
        if (str[i] == '.')
        {
            count++;
        }

        i++;
    }
    int x = 2;
    if (flag)
    {
        x = count;
    }
    cout << x << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        display(t);
    }
    return 0;
}