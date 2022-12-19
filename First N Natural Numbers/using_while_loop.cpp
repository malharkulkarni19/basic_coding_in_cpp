#include<iostream>
using namespace std;

int main()
{
    int num;   //first declare counts of numbers
    cout << "Enter number " << endl;
    cin >> num ;

    int i = 1;      //declare first element in loop
    while(i <= num){     //while loop
        cout << i << " ";
        i++;
    }
    return 0;
}
