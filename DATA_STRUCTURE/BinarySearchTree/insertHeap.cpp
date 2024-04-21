#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin >> x;
    v.push_back(x);
    int sz = v.size() - 1;
    //cout << sz << endl;
    while (sz != 0)
    {
        int p_idx = (sz - 1) / 2;
        if (v[p_idx] < v[sz])
        {
            swap(v[p_idx], v[sz]);
        }
        else
        {
            break;
        }
        sz = p_idx;
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}