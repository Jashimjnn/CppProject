#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        int swipesLeft=0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                swipesLeft-=1;
                
            }
            else
            {
                swipesLeft = x;
            }

            if (swipesLeft < 0)
            {
                //cout << "NO" << endl;
                flag = true;
                break;
            }
        }

        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}