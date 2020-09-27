#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
/*
Phải có thư viên <math.h>
Hàm lũy thừa = pow(x,y) vd : 1 mũ 2 thì pow(1,2);
*/
int main()
{
    int x, n;
    float s;
    cout << "Vui long nhap X";
    cin >> x;
    cout << "Vui long nhap N(luy thua)";
    cin >> n;
    s = pow(x,n);
    cout << "Ket qua cua s=" << s;


    return 0;

}
