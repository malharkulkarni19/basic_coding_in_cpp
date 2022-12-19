#include <iostream>
using namespace std;

int main()
{
    int low, high;
    cout << "Enter the numbers: " << endl;
    cin >> low >> high;

    for(int i = low;i<=high;i++)
    {
        if(i%5==0)
            continue;

        cout << i << " ";

    }
    return 0;
}
