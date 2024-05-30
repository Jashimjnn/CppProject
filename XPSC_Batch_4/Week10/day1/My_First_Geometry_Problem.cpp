/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;
        ll cnt=0,cnt1=0;
        for(int i=0;i<4;i++)
        {
            if(i==0)
            {
                if(str[i]=='1')
                {
                    cnt-=10;
                }
            }
            else if(i==1)
            {
                if(str[i]=='1')
                {
                    if(cnt<0)
                    {
                        cnt+=30;
                    }
                    else
                    {
                        cnt+=10;
                    }
                }
            }
            else if(i==2)
            {
                if(str[i]=='1')
                {
                    cnt1-=10;
                }
            }
            else
            {
                if(str[i]=='1')
                {
                    if(cnt1<0)
                    {
                        cnt1+=30;
                    }
                    else
                    {
                        cnt1+=10;
                    }
                }
            }
        }
        ll x,y;
        if(cnt<0)
        {
            x = abs(cnt)+1;
        }
        else
        {
            x = cnt+1;
        }
        if(cnt1<0)
        {
            y = abs(cnt1)+1;
        }
        else
        {
            y = cnt1+1;
        }
        cout<<x*y<<endl;
    }
    return 0;
}
