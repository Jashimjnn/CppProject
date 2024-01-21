#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool display()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    string t;
    bool flag = false;

    for (int i = 0; i < (1 << n); i++)
    {
        t = "";
        //flag = false;

        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                t += toupper(a[j]);
                flag = true;
            }
            else
            {
                t += tolower(a[j]);
            }
        }

        if (t == b && t != c)
        {
            return true;
        }
    }

    return false;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = display();
        if(flag)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}