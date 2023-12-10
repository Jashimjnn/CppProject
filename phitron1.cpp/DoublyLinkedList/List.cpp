#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    // list<int>mylist;
    // list<int>mylist(10,5)
    // copy list in list
    list<int>list1={1,2,3,4,5};
    list<int>mylist(list1);
    cout<<mylist.size()<<endl;
    for(auto it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //copy array li list
    int ar[5]={10,20,30,40,50};
    list<int>mylist1(ar,ar+5);
    for(auto it=mylist1.begin();it!=mylist1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // copy vector in list
    vector<int>v={100,200,300,400,500};
    list<int>mylist2(v.begin(),v.end());
    // for(auto it=mylist2.begin();it!=mylist2.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    for(int v : mylist2)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}