#include<iostream>
using namespace std;

int main()
{
    int num ;     //first declare counts of numbers
    cout << "Enter number" << endl;
    cin >> num;

    for(int i = 1; i <= num; i++){     //for loop
        cout << i << " ";
    }
    return 0;
}
