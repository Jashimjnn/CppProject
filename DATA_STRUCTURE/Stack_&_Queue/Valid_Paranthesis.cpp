#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool balanced(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (st.empty())
        {
            st.push(str[i]);
        }
        else if ((st.top() == '(' && str[i] == ')') || (st.top() == '{' && str[i] == '}') || (st.top() == '[' && str[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(str[i]);
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}
int main()
{

    string str;
    cin >> str;
    if (balanced(str))
    {
        Y;
    }
    else
    {
        N;
    }

    return 0;
}