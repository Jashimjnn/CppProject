#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    ll cnt[26]={0};
    char ch = 'a';
    set<char>st;
    for(int i=0;i<26;i++)
    {
        bool f=true;
        for(int i=0;i<str.size();i++){
            if(str[i]==ch){
              f=false;break;
            }
        }
        if(f){
            cout<<ch<<endl;return 0;
        }
        ch++;
    }
    
    cout<<"None"<<endl;
    return 0;
}