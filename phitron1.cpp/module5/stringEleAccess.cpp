#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout<<"YES"<<endl;
#define n cout<<"NO"<<endl;
int main()
{
   string str;
   cin>>str;
   cout<<str[0]<<endl;
   cout<<str.at(0)<<endl;
   cout<<str[str.size()-1]<<endl;
   cout<<str.back()<<endl;
   cout<<str.front()<<endl;
   return 0;
}