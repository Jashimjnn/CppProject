#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Student
{
    public:
     string name;
     int val;
     Student(string name,int val)
     {
        this->name=name;
        this->val=val;
     }
};
class cmp
{
    public:
     bool operator()(Student a,Student b)
     {
        if(a.name==b.name)
        {
           return a.val<b.val;
        }
        else
        {
            a.name>b.name;
        }
     }

};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int val;
        cin>>name>>val;
        Student obj(name,val);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().val<<endl;
        pq.pop();
    }
    return 0;
}