#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.23456781545, y = 1.5897468522447, z = 1.789456897462;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    cout << floor(x) << endl;    //below int value
    cout << ceil(x) << endl;     //above int value

    cout << trunc(z) << endl;    //nearest int value

    cout << round(z) << endl;    //nearest int value, but depends upon first value after point

    cout << fixed << setprecision(4) << x << endl;   //set precision for number

    cout << scientific << setprecision(4) << y << endl;    //set precision like scientific calculator, for y it is 1.5897e+00.
}
