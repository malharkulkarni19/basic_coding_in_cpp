#include<iostream>
using namespace std;

int main ()
{
    int m,n,i,j;
    cout << "Enter the number of rows of the array" << endl;
    cin >> n;
    cout << "Enter the number of columns of the array" << endl;
    cin >> m;

    int arr[n][m];

    cout << "Enter the Elements of the array" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
             cin >> arr[i][j];
        }
    }

    cout << "Elements of given array: " << endl;
    //Loop through the array by incrementing value of i
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
