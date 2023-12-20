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
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int>st1;
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        st1.push(x);
    }
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    return 0;
}