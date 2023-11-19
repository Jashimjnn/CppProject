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
// Student fun()
// {
//     Student rahim(29,9,5.00);
//     return rahim;
// }
Student *fun()
{
    Student rahim(29,9,5.00);
    Student *p = &rahim;
    return p;
}
int main()
{
//    Student a = fun();
//    cout<<a.roll<<" "<<a.cls<<" "<<a.gpa<<endl;
   Student *a = fun();
   cout<<a->roll<<" "<<a->cls<<" "<<a->gpa<<endl;
   return 0;
}