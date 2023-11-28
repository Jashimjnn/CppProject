#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(30);
    cout<<v.capacity()<<endl;
    v.push_back(40);
    cout<<v.capacity()<<endl;
    v.push_back(50);
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    //v.clear();
    cout<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    v.resize(2);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}