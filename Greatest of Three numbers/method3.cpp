#include<iostream>
#include<algorithm>
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

    int result;

    result =  max(first,max(second, third));

    cout << result << " is the largest" << endl;

    return 0;
}
