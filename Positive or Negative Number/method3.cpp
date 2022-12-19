#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num ;

    if(num == 0)
        cout << "Zero"; else (num > 0) ? cout << "Positive number": cout << "Negative number" << endl ;

    return 0;
}
