#include<iostream>
using namespace std;

int main()
{
    int age ;
    cout << "Enter your age" << endl;
    cin >> age;

    age >= 18 ? cout << "You are eligible" : cout << "You are not eligible" << endl;

    return 0;
}
