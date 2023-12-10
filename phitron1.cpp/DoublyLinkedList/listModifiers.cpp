#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    list<int>list1={10,20,30,40,50,60};
    // list<int>list2;
    // list2=list1;
    // for(int v:list2)
    // {
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    // list2.assign(list1.begin(),list1.end());
    // for(int v:list2)
    // {
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    list1.push_back(100);
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    // list1.pop_back();
    // for(int v:list1)
    // {
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    //list1.pop_front();
    list1.insert(next(list1.begin(),2),100);
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.erase(next(list1.begin(),2));
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.insert(next(list1.begin(),3),{100,200,300,400});
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list<int>list3={500,600,700};
    list1.insert(next(list1.begin(),8),list3.begin(),list3.end());
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    list1.erase(next(list1.begin(),2),next(list1.begin(),5));
    for(int v:list1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}