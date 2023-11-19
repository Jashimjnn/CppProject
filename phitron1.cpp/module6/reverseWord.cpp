#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout<<"YES"<<endl;
#define n cout<<"NO"<<endl;
void print(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
   string str;
   getline(cin,str);
   stringstream ss(str);
   int cnt=0;
   print(ss);
   
//    while(ss>>word)
//    {
//     cout<<word<<endl;
//    }
   return 0;
}