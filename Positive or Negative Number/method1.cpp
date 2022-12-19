#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number you want to check" << endl;
    cin >> num ;

    if(num < 0){
        cout << num << " is negative number" << endl;
    }
    else if(num > 0){
        cout << num << " is positive number" << endl;
    }
    else{
        cout << "Zero" << endl;
    }
    return 0;
}
