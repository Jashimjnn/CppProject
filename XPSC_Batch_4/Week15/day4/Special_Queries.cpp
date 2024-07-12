#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string str;
            cin >> str;
            q.push(str);
        }
        else if (x == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}