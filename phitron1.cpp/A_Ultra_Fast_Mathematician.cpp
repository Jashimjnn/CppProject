 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 #define Y cout << "YES" << endl;
 #define N cout << "NO" << endl;
 int main()
 {
     string str,str1;
     cin>>str>>str1;
     string temp;
     for(int  i=0;i<str.size();i++)
     {
        if(str[i]!=str1[i])
        {
            temp+='1';
        }
        else
        {
            temp+='0';
        }
     }
     cout<<temp<<endl;
     return 0;
 }