#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    if( num1 == num2){
        cout << "Both are equal" << endl;
    }
    else if ( num1 > num2){
        cout << num1 << " is greater then " << num2 << endl;
    }
    else {
        cout << num2 << " is greater then " << num1 << endl;
    }
    return 0;
}
