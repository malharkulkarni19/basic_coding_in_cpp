#include<iostream>
using namespace std;

void table(int x)
{
    for(int i = 1; i <= 10; i++)
    {
        cout << x << " * " << i << " = " << x * i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;

    table(n);
    return 0;
}
