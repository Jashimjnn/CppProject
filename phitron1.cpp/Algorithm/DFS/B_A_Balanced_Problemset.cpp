#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int display()
{
    int x, n;
    cin >> x >> n;
    int cnt,flag = 1;
    //set<int>st;
    while (x - flag * n > -1)
    {
        if (!((x - (flag * n)) % flag))
        {
            cnt=flag;
        }
        flag++;
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ans = display();
        cout << ans << endl;
    }

    return 0;
}
