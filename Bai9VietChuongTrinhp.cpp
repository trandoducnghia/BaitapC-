#include <iostream>
#include <stdio.h>
using namespace std;
/*
Cái này i dì rồi nên không có tips :v
chú ý mỗi n-1 để trong ngoặc cho đẹp trai :v
*/
int main()
{
    int i;
    float x, n, p; // đầu bài không yc nhập số nguyên;
    p = 0;
    cout << "Vui long nhap n";
    cin >> n;
    cout << "Vui long nhap x";
    cin >> x;
    for (i=0;i<n;i++)
    {
        p = i*x*(i-1);
    }
    cout << "Ket qua cua P=" << p;

    return 0;

}
