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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ptr1 = 0;
    int ptr2 = n - 1;
    for (ptr1 = 0; ptr1 < n && v[ptr1] == v[0]; ptr1++)
    {
    }
    for (ptr2 = n - 1; ptr2 >= 0 && v[ptr2] == v[n - 1]; ptr2--)
    {
    }
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (v.front() != v.back())
    {
        cout << min(n - ptr1, ptr2 + 1) << endl;
    }
    else
    {
        cout << max(0, ptr2 - ptr1 + 1) << endl;
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