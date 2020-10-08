#include <iostream>
#include <array>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cout << "vui long nhap A";
    cin >> a;
    cout << "Vui long nhap b";
    cin >> b;
    int r = 0;
    while (a%b!=0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    cout << b;


    return 0;
}
