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
        int cnt1=0,cnt2=0;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            if(x>0 || x<0)
            {
                cnt1++;
            }
            else if(y>0 || y<0)
            {
                cnt2++;
            }
        }
        if((cnt1+cnt2)>3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}