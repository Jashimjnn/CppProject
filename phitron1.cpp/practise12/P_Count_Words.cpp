#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout << "YES" << endl;
#define n cout << "NO" << endl;
int main()
{
    string str;
    getline(cin, str);
    bool flag = false;
    int cnt = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]) > 0)
        {
            if (flag == false)
            {
                cnt++;
            }
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    cout << cnt << endl;
    return 0;
}