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
        int cnt = 0;
        bool f = false;
        for (int i = 0; i < 6; i++)
        {
            char x;
            cin >> x;
            if (x == 'W')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt >= 3)
            {
                f = true;
            }
        }

       if(f==true)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
    }
    return 0;
}
