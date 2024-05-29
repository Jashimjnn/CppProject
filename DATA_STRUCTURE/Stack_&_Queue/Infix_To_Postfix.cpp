#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll prec(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='/' || ch=='*')
    {
        return 2;
    }
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
char associate(char ch)
{
    if(ch=='^')
    {
        return 'R';
    }
    return 'L';
}
void infix_to_postfix(string str)
{
    stack<char>st;
    string tmp="";
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') && (ch>='0' && ch<='9'))
        {
            tmp+=ch;
        }
        else if(ch=='(')
        {
            st.push(ch);
        }
        else if(ch==')')
        {
            while(st.top()!='(')
            {
                tmp+=st.top();
                st.pop();
            }
        }
        else
        {
            while((!st.empty() && prec(str[i])<prec(st.top()))|| (!st.empty() && prec(str[i])==prec(st.top())) && associate(str[i]=='L'))
            {
                tmp+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty())
    {
        tmp+=st.top();
        st.pop();
    }
    cout<<tmp<<endl;
}
int main()
{
    string str;
    cin>>str;
    infix_to_postfix(str);
    return 0;
}