#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int num1, num2, largest;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    if(num1 == num2)
    {
        printf("Both are Equal\n");
    }
    else{
        largest = num1 > num2? num1 : num2;
        cout << largest << " is largest";
    }

  return 0;
}
