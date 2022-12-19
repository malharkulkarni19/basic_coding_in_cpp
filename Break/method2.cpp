#include <iostream>
using namespace std;

int main()
{
    int low, high;
    cout << "Enter the numbers: " << endl;
    cin >> low >> high;

    int i = low;
    while(i<=high)
    {
        cout << i << " ";

        if(i%13==0)
            break;
        i++;
    }
    return 0;
}
