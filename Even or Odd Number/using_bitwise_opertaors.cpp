#include<iostream>
using namespace std;

bool isEven(int num)
{
    // n & 1 is 1, then odd, else even
    return (!(num & 1));
}

int main()
{
    int num;
    cout << "Enter number you want to check" << endl;
    cin >> num;

    if(isEven(num)){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}
