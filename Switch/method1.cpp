#include <iostream>
using namespace std;

int main()
{
    int option;
    cout << "Enter your choice: "<< endl;
    cin >> option;

    switch (option)
   {
        case 1: cout << "Option 1 Selected" << endl;;
            break;
        case 2: cout << "Option 2 Selected" << endl;;
            break;
        case 3: cout << "Option 3 Selected" << endl;;
            break;
        case 4: cout << "Option 4 Selected" << endl;
            break;
        default: cout << "Invalid" << endl;
            break;
   }
   return 0;
}
