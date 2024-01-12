#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int val;
    Student(string name, int val)
    {
        this->val = val;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.name==b.name)
        {
            return a.val<b.val;
        }
        else
        {
            return a.name>b.name;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int val;
        cin >> name >> val;
        Student obj(name, val);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }
    return 0;
}