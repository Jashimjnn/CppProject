#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>v(x);
    set<int>s;
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    int y;
    cin>>y;
    vector<int>v1(y);
    for(int i=0;i<y;i++)
    {
        cin>>v1[i];
        s.insert(v1[i]);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
    
}