#include<iostream>
using namespace std;
int main ()
{
    int first, second, third;

    cout << "Enter first number:" << endl;
    cin >> first;
    cout << "Enter second number:" << endl;
    cin >> second;
    cout << "Enter third number:" << endl;
    cin >> third;

    //comparing first with other numbers
    if ((first >= second) && (first >= third))
    {
        cout << first << " is the greatest " << endl;
       //comparing Second with other numbers else if ((second >= first) && (second >= third))
        cout << second << " is the greatest" << endl;
    }
    else
    {
        cout << third << " is the greatest" << endl;
    }
    return 0;
}
