#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Student
{
    public:
     int roll;
     int cls;
     double gpa;
     Student(int roll, int cls, double gpa)
     {
        // (*this).roll=roll;
        // (*this).cls=cls;
        // (*this).gpa=gpa;
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
     }
};
int main()
{
   Student rahim(29,9,5.00);
   cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
   
   //Student karim;
  
   return 0;
}