#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums1(n), nums2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }
    int z = n + m;
    vector<double> v(z);
    for (int i = 0; i < n; i++)
    {
        v[i] = nums1[i];
    }
    for (int i = 0; i < m; i++)
    {
        v[i + n] = nums2[i];
    }

    sort(v.begin(), v.end());
    if (z % 2 == 0)
    {
        int ans = z / 2;
        double fb = v[ans] + v[ans-1];
        cout << fixed<<setprecision(5)<< fb/ 2.0 << endl;
    }
    else
    {
        int ans = z / 2;
        double fb = v[ans];
        cout << fixed<<setprecision(5)<<fb << endl;
    }
    return 0;
}