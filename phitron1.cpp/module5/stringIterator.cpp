#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout<<"YES"<<endl;
#define n cout<<"NO"<<endl;
int main()
{
   string str;
   string::iterator it;
   cin>>str;
//    for(int i=0;i<str.size();i++)
//    {
//     cout<<str[i]<<endl;
//    }
//    cout<<*str.begin()<<endl;
//    cout<<*(str.end()-1)<<endl;
    for(it=str.begin();it<str.end();it++)
    {
        cout<<*it<<endl;
    }
   return 0;
}