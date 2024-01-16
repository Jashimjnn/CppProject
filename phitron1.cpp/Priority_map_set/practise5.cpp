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
    int marks;
    Student(string name, int val, int marks)
    {
        this->name = name;
        this->val = val;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.marks<b.marks)
        {
            return true;
        }
        else if(a.marks>b.marks)
        {
            return false;
        }
        else
        {
            return a.val>b.val;
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
        int val, marks;
        cin >> name >> val >>marks;
        Student obj(name, val, marks);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            int val, marks;
            cin >> name >> val >> marks;
            Student obj(name, val, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().val << " " << pq.top().marks << endl;
        }
        else if (x == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().val << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().val << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}