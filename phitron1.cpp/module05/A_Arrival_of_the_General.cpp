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
    int v[n];
    int cnt1, cnt2;
    int mx = 0;
    int mi = 101;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i]>mx)
        {
            mx = v[i];
            cnt1=i;
        }
        if (v[i]<=mi)
        {
            mi = v[i];
            cnt2=i;
        }
    }
    if (cnt1 > cnt2)
    {
        cnt2++;
    }
    cout << cnt1+(n-1)-cnt2 << endl;

    // cout<<cnt1<<" "<<cnt2<<endl;
    return 0;
}