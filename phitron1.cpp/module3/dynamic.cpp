#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Student
{
    public:
     int roll;
     int  cls;
     double gpa;
    Student(int roll,int  cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

int main()
{

   Student *karim = new Student(29,9,4.95);
   cout<<karim->roll<<" "<<karim->cls<<" "<<karim->gpa<<endl;
   return 0;
}