#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    //int ar[5][5];
    int cnt;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int x;
            cin>>x;
             if (x == 1)
            {
                cnt = abs(i-3) + abs(j-3);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}