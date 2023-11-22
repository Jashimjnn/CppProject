#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout << "YES" << endl;
#define n cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string str;
        cin >> str;
        bool str1[26]={0};
        int cnt = 0;
        for (char c : str)
        {
            if (!str1[c-'A'])
            {
                cnt+=2;
                str1[c-'A']=true;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}