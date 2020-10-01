#include <iostream>
#include <math.h>
using namespace std;
/*
Chú ý thư viện <math.h>
- Sử dụng các hàm :
+ To_string => cover từ int => string, to_string(num)[VỊ_TRÍ_STRING];
+ atoi(tenbien.c_str()) => cover từ string => int;
- Thực hiện :
- For từ 100 -> 999;
- Gọi sa, sb, sc là string và get a, b, c từ i.
- Gọi a, b, c là int từ string sa, sb, sc;
- Pow (a,3) + pow(b,3) + pow(c,3) so sánh với i nếu = nhau => đúng.
=> Done.
*/
int main()
{
    int i;
    for (i=100;i<=999;i++)
    {
        string sa, sb, sc;
        sa = to_string(i)[0];
        sb = to_string(i)[1];
        sc = to_string(i)[2];
        int a, b, c;
        a = atoi(sa.c_str());
        b = atoi(sb.c_str());
        c = atoi(sc.c_str());
        float all;
        all = pow(a,3) + pow(b,3) + pow(c,3);

        if(all == i)
        {
            cout << all << " a=" << a << " b=" << b << " c="<<c << "\n";
        }



    }
    return 0;
}
