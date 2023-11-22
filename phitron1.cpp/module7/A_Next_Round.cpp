#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n, k;
    cin >> n >> k;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    int x = ar[k];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] >= x && ar[i] != 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}