#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    list<int>list1={10,20,30};
    cout<<list1.max_size()<<endl;
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    //list1.clear();
    list1.resize(2);
    cout<<list1.size()<<endl;
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}