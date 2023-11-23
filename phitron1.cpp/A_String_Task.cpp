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
    string str1;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='a'&&str[i]!='Y'&&str[i]!='y' && str[i]!='A' && str[i]!='E' &&str[i]!='e'&& str[i]!='I' && str[i]!='i' && str[i]!='O'&& str[i]!='o'&&str[i]!='U'&&str[i]!='u')
        {
            str1.push_back(str[i]);
        }
    }
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    string temp=".";
    for(int i=0;i<str1.size();i+=2)
    {
        str1.insert(i,temp);
    }
    cout<<str1<<endl;
    return 0;
}