#include<iostream>
#include<math.h>
using namespace std;

double SquareRoot(int x)
{
    double sq;
    sq = sqrt(x);
    return sq;
}
double CubeRoot(int y)
{
    double cb;
    cb = cbrt(y);
    return cb;
}
int main()
{
    int x, y;
    cout << "Enter Numbers" << endl;
    cin >> x >> y ;

    cout << "Square root of " << x << " is : " << SquareRoot(x) << endl;
    cout << "Cube root of " << y << " is : " << CubeRoot(y) << endl;
    return 0;
}
