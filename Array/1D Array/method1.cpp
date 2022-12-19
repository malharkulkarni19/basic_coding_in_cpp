#include<iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter length of an array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array" << endl;

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements in the array are : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
