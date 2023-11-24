#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        deque<ll>d(n+4);
        for (int i = 1; i <= n; i++)
        {
            cin >> d[i];
        }
        if(n==1)
        {
            cout<<d[1]-1<<endl;
            return;
        }
        else
        {
            deque<ll> de;
            de.push_back(1);
            for (int i = 1; i <= n; i++)
            {
                if (d[i] != de[de.size() - 1])
                {
                    de.push_back(d[i]);
                }
            }
            ll sum=0;
            for(int i=0;i<de.size()-1;i++)
            {
                if(de[i]<de[i+1])
                {
                    sum+=(de[i+1]-de[i]);
                }
            }
            cout<<sum<<endl;
        }
    }
}
int main()
{
    display();
    return 0;
}