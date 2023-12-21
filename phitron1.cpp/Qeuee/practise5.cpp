#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int>nextElement(vector<int> &nums)
{
    stack<int>st;
    vector<int> res(nums.size(),-1);
    for(int i=0;i<nums.size();i++)
    {
        while(!st.empty() and nums[i]>nums[st.top()])
        {
            res[st.top()]=nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res = nextElement(v);
    for(int i:res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}