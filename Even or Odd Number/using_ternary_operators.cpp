#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number you want to check" << endl;
    cin >> num;

    num % 2 == 0 ? cout << "even" : cout << "odd" << endl;
    return 0;
}
