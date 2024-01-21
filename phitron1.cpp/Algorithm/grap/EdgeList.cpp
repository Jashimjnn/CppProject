#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        //v.push_back(make_pair(a,b));
        v.push_back({a,b});
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

    // for (auto p : v)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    for(pair<int,int>x :v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}