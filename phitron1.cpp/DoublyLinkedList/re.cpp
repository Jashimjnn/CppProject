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
            if (v == 0)
            {
                list1.pop_front();
            }
            else if(v>list1.size())
            {
               continue;
            }
            else
            {
                list1.remove()
            }
        }
        cout << "L -> ";
        for (auto va : list1)
        {
            cout << va << " ";
        }
        cout << endl;
        list1.reverse();
        cout << "R -> ";
        for (auto va : list1)
        {
            cout << va << " ";
        }
        cout << endl;
    }
    return 0;
}