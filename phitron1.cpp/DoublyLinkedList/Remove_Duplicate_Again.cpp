#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    list<ll>list1;
    while(true)
    {
        ll x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        list1.push_back(x);
    }
    list1.sort();
    list1.unique();
    for(auto v : list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}