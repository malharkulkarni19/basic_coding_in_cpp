#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2 ;

    cout << "Floor of "<< num1 << " is : " << floor(num1) << endl;
    cout << "Ceil of " << num1 << " is : " << ceil(num1) << endl;
    cout << "Floor of " << num2 << " is : " << floor(num2) << endl;
    cout << "Ceil of " << num2 << " is : " << ceil(num2) << endl;
    return 0;
}
