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

    int temp, result;

    // find the largest btw first and second and store in temp
    temp = first > second ? first:second;
    // find the largest btw temp and third and finally printing it
    result = temp > third ? temp:third;

    // the above two ternary statements can be condensed into one ternary statement
    //result = third > (first > second ? first : second) ? third : ((first > second) ? first : second);

    cout << result << " is the largest" << endl;


    return 0;
}
