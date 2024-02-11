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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                cout << "*";
            }
            else if (j == n - 1 - i)
            {
                cout << "*";
            }
            else
            {
                if(j>i)
                {
                    cout<<7;
                }
                else
                {
                    cout<<"0";
                }
            }
        }
        cout << endl;
    }
    return 0;
}