#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin >> n;
    int a[n];
    a[0] = 0;
    a[1] = 1;
    // O(N)
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n] << endl;
    return 0;
}