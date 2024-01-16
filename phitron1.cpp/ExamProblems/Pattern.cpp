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
    int k=1;
    int sp=n-1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 != 0)
            {
                cout<<"#";
            }
            else
            {
                cout<<"-";
            }
        }
        cout<<endl;
        if (i <= n - 1)
        {
            sp--;
            k += 2;
        }
        else
        {
            sp++;
            k -= 2;
        }
    }
    return 0;
}