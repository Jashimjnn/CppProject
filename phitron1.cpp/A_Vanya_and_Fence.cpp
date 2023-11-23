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
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]<=k)
        {
            ans+=1;
        }
        else
        {
            ans+=2;
        }
    }
    cout << ans << endl;
    return 0;
}