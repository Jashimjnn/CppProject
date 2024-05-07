#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        stack<char> st;
        ll flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(str[i]);
            }
            else
            {
                if (st.top() != str[i])
                {
                    st.pop();
                    flag++;
                }
                else
                {
                    st.push(str[i]);
                }
            }
        }
        if (flag % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
    return 0;
}
