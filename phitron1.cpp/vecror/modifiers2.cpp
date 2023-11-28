#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    vector<int>v={1,2,3,4,5,6,7,8,9};
    replace(v.begin(),v.end(),2,100);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    replace(v.begin(),v.end()-1,2,100);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //vector<int>::iterator it;
    auto it=find(v.begin(),v.end(),3);
    cout<<*it<<endl;
    if(it==v.end())
    {
        cout<<"not"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
    }
    return 0;
}