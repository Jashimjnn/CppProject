#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout<<"YES"<<endl;
#define n cout<<"NO"<<endl;
int main()
{
   string str;
   getline(cin,str);
   cout<<str<<endl;
   stringstream ss(str);
   string word;
   int cnt=0;
   while(ss>>word)
   {
    cout<<word<<endl;
    cnt++;
   }
   cout<<cnt<<endl;
   return 0;
}