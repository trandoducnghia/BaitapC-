#include <iostream>
#include <math.h>
using namespace std;
/*
Có hàm :
+ String TEN_BIEN = to_string(tenbien) => cover sang chữ ví dụ 11 > "11"
+ int TENBIEN = atoi(tenbien.c_str()) ==> cover sang số, ví dụ "11" > 11;

Y tuong :
Goi m, n la so dau bau input, i la số để for từ 0-9;
Khi thực hiện vòng lặp for gọi các hàm : m1, n1, i1, all;
trong đó : 
m1 là số chuyển từ int(m) => string;
n1 là số chuyển từ int(n) => string;
i1 là số chuyển từ int(i) => string;
all là số gộp lại của m1, n1, i1 ( ví dụ m1 = 3, n1 =2, i=3) => "332";
Rồi sử dụng hàm atoi(all.str()) để chuyển lại thành int vd "332" => 332;
so sánh kết quả từ float vs int => nếu ok :v còn chả biết đúng đầu bài không.
*/
int main()
{
   int m, n, i;
   cout << "Vui long nhap M";
   cin >> m;
   cout << "Vui long nhap N";
   cin >> n;
   for (i=0;i<=9;i++)
   {
       string m1, n1, i1, all;
       m1  = to_string(m);
       n1  = to_string(n);
       i1  = to_string(i);
       all = m1 + i1 + n1;
       int that = atoi(all.c_str());
       int sosanh = atoi(all.c_str());
       if(int(sqrt(that)) == float(sqrt(sosanh)))
       {
           cout << "Chu so:"<< i << "Nam giua M, N la chinh phuong. So la" << all;
       }
   }
    return 0;
}
