#include <iostream>
#include <math.h>
#include <stdio.h>
/*
Cha hieu the nao chay o nha 1/2 = 0 @@@
Cach lam :
Goi N la input, goi k la so tu nhiem de vong lap for., goi s la tong kieu du lieu
float;
su dung lenh for k tu 0 => n;
s = 1/2*k;
=> done;
*/
using namespace std;

int main()
{
    int N, k;
    float s;
    s=0;
    cout << "Vui long nhap N:";
    cin >> N;
    for (k=0;k<N;k++)
    {
        s+=1/2.*k;
    }
    cout << "Tong bang : " << s;
    return 0;
} 
