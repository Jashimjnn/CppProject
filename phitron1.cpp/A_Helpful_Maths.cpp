#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str, str1;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]!='+')
        {
            str1.push_back(str[i]);
        }
        
    }
    sort(str1.begin(),str1.end());
    string temp = "+";
    for(int i=1;i<str.size();i+=2)
    {
        
            str1.insert(i,temp);
    
        
    }
    cout<<str1<<endl;

    return 0;
}