#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    list<int> list1;
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            ll v;
            cin >> v;
            list1.push_front(v);
            
        }
        else if (x == 1)
        {
            ll v;
            cin >> v;
            list1.push_back(v);
            
        }
        else if (x == 2)
        {
            ll v;
            cin >> v;
            if(v>=0 && v<list1.size())
            {
                // auto it = list1.begin();
                // advance(it,v);
                // list1.erase(it);
                list1.erase(next(list1.begin(),v));
            }
        }
        cout << "L -> ";
        for (auto va : list1)
        {
            cout << va << " ";
        }
        cout << endl;
        cout << "R -> ";
        for (auto it = list1.rbegin();it!=list1.rend();it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}