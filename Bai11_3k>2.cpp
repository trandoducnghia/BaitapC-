#include <iostream>
#include <math.h>
#include <stdio.h>
/*
So nguyen duong nen dat ten cac bien la int;
goi
+ n : la so tu input de ket thuc k
+ i : la so de check xem da nho nhat chua
+ k : la so de tien hanh vong lap tu k => N 

tien hanh :
set i = -1;
For tu n => k;
su dung dieu kien neu 3*k >n se thoa man yeu cau cua de bai, tiep theo
set dieu kien thu 2 cua de bai la tim so nguyen duong nho nhat thi so sanh
k voi i, neu i > k => set i = k roi show ra man hinh la song.
game i di. ^^
*/
using namespace std;

int main()
{
    int i, n, k;
    cout << "Vui long nhap N :";
    cin >> n;
    i = -1;
    for (k =0; k < n; k++)
    {
        if(3*k >n)
        {
            if(k < i || i == -1) i = k;
            /*Dieu kien 3 nhan k lon hon n*/
        }
    }
    if(i == -1)
    {
        cout << "Khong co so nao thoa man ca";
    }
    else
    {
        cout << "Vay so nguyen K" << i << "Thoa man dieu kien 3*k >n";
    }

    return 0;
}
