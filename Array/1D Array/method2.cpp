#include <iostream>
using namespace std;

int main (){
    //Initialize array
    int n,i;

    cout<<"Enter the length of the array" << endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Elements of the array" << endl;

    i = 0;
    while(i < n)
    {
        cin >> arr[i];
        i++;
    }
    cout<<"Elements of given array : " << endl;
    //Loop through the array by incrementing value of i
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
