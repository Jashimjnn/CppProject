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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt = 0,cnt1=0;
        int i=n-1;
        while(i>=0)
        {
            if(str[i]=='B')
            {
              cnt++;
            }
            else
            {
                cnt1+=cnt;
                if(cnt)
                {
                    str[i]='B';

                    cnt=0;
                    i++;
                }
                //i++;
            }
            i--;
        }
        cout << cnt1 << endl;
    }
    return 0;
}