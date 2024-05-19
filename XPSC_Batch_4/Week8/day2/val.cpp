#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x = 1.0, result;

  result = asin(x);
  cout << "acos(x) = " << result << " radians" << endl;
  
  // result in degrees
  cout << "acos(x) = " << result*180/3.1415 << " degrees" << endl;
  
  return 0;
}