#include<iostream>
#include<math.h>
using namespace std;

float Add(float a, float b)
{
    float sum;
    sum = a + b;
    return sum;
}
float Subtract(float a, float b)
{
    float sub;
    sub = a - b;
    return sub;
}
float Multiplication(float a, float b)
{
    float mult;
    mult = a * b;
    return mult;
}
float Division(float a, float b)
{
    float div;
    div = a / b;
    return div;
}

int main()
{
    float a, b;

    cout << "Enter first value" << endl;
    cin >> a;
    cout << "Enter second value" << endl;
    cin >> b;

    cout << "The addition of " << a << " and " << b << " is " << Add(a, b) << endl;
    cout << "The subtraction of " << a << " and " << b << " is " << Subtract(a, b) << endl;
    cout << "The multiplication of " << a << " and " << b << " is " << Multiplication(a, b) << endl;
    cout << "The division of " << a << " and " << b << " is " << Division(a, b) << endl;
}
