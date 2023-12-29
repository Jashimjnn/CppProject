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
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (c == '0')
                st.push(c);
            else
            {
                if (!st.empty() && st.top() == c)
                {
                    st.pop();
                }
                else
                    st.push(c);
            }
        }
        int cnt = 0, ans = 0;
        while (!st.empty())
        {
            char c = st.top();
            if (c == '0')
                cnt++;
            else
            {
                ans = max(cnt, ans);
                cnt = 0;
            }
            st.pop();
        }
        ans = max(ans, cnt);
        cout << ans << endl;
    }
    return 0;
}
