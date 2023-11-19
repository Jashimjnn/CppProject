#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Y cout<<"Yes"<<endl;
#define N cout<<"No"<<endl;
void display(int a)
 {
       map<int,int>mp;
        vector<int>vec(2);
        vector<int>v1;
        int cnt=0;
        for(int i=0;i<a;i++)
        {
            cin>>cnt;
            //v1[cnt]++;
            mp[cnt]++;
        }
        if(mp.size()>2)
        {
            N;
            return ;
        }
        if(mp.size()==1)
        {
            Y;
            return ;
        }
        int i=0;
        for(auto x : mp)
        {
          vec[i]=x.second;
        }
        if(abs(vec[0]-vec[1])>2)
        {
            N;
        }
        else
        {
            Y;
        }
 }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        display(n);
       
    }
    return 0;
}