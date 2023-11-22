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
    int ans = 0;
    while (n--)
    {
        int cnt=0;
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            if(a==1)
            {
                cnt++;
            }
        }
        if(cnt>=2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}