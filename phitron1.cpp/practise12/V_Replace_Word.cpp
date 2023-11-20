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
   string  str1="EGYPT";
   while(str.find("EGYPT")!= -1)
   {
    str.replace(str.find("EGYPT"),5," ");
   }
   cout<<str<<endl;
   return 0;
}