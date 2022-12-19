#include<iostream>
#include<algorithm>       // function max available in here
using namespace std;

int main ()
{
  int num1, num2;
  cout << "Enter first number: " <<endl;
  cin >> num1;
  cout << "Enter second number: " << endl;
  cin >> num2;

  if (num1 == num2)
  {
      cout << "both are equal" <<endl;
  }
  else
  {
      cout << max(num1,num2) << " is greater" <<endl;
  }

  return 0;
}
