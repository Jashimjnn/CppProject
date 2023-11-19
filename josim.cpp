#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
int main(){
    string s;
    cin>>s;
    int t=(s[s.size()-1]-'0')+1;
    string tem="";
    for(int i=0;i<s.size()-1;i++)tem+=s[i];
    tem+=to_string(t);
    cout<<tem<<endl;
}