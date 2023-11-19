#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Student
{
public:
    string name;
    int roll;
    char ch;
    int marks;
    int cls;
    Student(string name, int roll, char ch, int marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->ch = ch;
        this->marks;
        this->cls;
    }
};
int main()
{
    Student s1("Md Jashim Uddin", 101, 'a', 98, 11);
    Student s2("Rifa", 102, 'a', 95, 11);
    Student s3("Nitu", 103, 'a', 90, 11);
    if (s1.marks > s2.marks && s1.marks > s3.marks)
    {
        cout << s1.name << endl;
    }
    else if (s2.marks > s1.marks && s2.marks > s3.marks)
    {
        cout << s2.name << endl;
    }
    else
    {
        cout << s3.name << endl;
    }
    return 0;
}