#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    list<int>list1={1,2,3,4,5,6,4,3,5,7,8,4};
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.remove(4);
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.sort();
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.sort(greater<int>());
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.unique();
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.reverse();
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}