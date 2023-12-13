#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    getline(cin,str);
    string  tmp="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<= 'z')
        {
            tmp+=str[i];
        }
    }
    //cout<<tmp<<endl;
    list<char>ch;
    for(int i=0;i<tmp.size();i++)
    {
        ch.push_back(tmp[i]);
    }
    ch.sort();
    ch.unique();
    cout<<ch.size()<<endl;
    return 0;
}