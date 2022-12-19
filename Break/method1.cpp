#include <iostream>
using namespace std;

int main()
{
    int low, high;
    cout << "Enter the numbers: " << endl;;
    cin >> low >> high;

    for(int i = low;i<=high;i++){
    {
        cout << i << " ";

        if(i%13==0)
            break;
    }
    return 0;
    }
}
