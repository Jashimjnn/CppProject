#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll Evaluate(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            st.push(str[i] - '0');
        }
        else
        {
            ll x = st.top();
            st.pop();
            ll y = st.top();
            st.pop();
            switch (str[i])
            {
            case '+':
                st.push(x + y);
                break;
            case '-':
                st.push(y - x);
                break;
            case '*':
                st.push(x * y);
                break;
            case '/':
                st.push(y / x);
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string str;
    cin >> str;
    cout << Evaluate(str) << endl;
    return 0;
}