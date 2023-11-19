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
   string str1;
   cin>>str1;
   // str=str+str1;
   str.append(str1);
   cout<<str<<endl;
   cout<<str1<<endl;

   str1.push_back('J');
   cout<<str1<<endl;
   str1.pop_back();
   cout<<str1<<endl;

   return 0;
}