#include<iostream>
using namespace std;

int main()
{
    int num;     //first declare counts of numbers
    cout << "Enter number " << endl;
    cin >> num;

    int i = 1;     //declare first element in loop

    do{                       //do while loop, do condition
        cout << i << " ";
        i++;
    }while(i <= num);        //while condition

    return 0;
}
