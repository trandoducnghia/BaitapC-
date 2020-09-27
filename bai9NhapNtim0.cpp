#include <iostream>
#include <stdio.h>
using namespace std;
/*
Cách thực hiện :
* Gọi :
- n là số nhập vào theo đề bài.
- all là số để tính cộng xem có bao nhiêu số 0;
- i để thực hiện vòng lặp for check số 0;

* Tiến hành
 - Sử dụng Cin >> n để input;
 - set all =0; trong TH nếu không có điều kiện phù hợp sẽ trả về 0 luôn.
 - sử dụng hàm : string tenbien = to_string(n); để chuyển đổi số sang số chữ
 ví dụ 1000 => "1000",
 - Sau khi chuyển đổi sang string ta có thể sử dụng hàm tenbien.length(); (Hàm này 
xem độ dài của chuỗi. vd "1000" = 4;"
 - sau đó sử dụng hàm for gọi i=0; i< tenbien.length; (tenbien.length là tên mà mình
chuyển từ hàm string qua);
- Sau đó thì dùng lệnh tenbien[i] rồi kiểm tra xem nó có phải số 0 không,
nếu là số 0 thì +1 vào all; ( ví dụ : 1000 => tenbien[0] => 1, tenbien[1] => 0,...);
Lưu ý : vì là string nên khi điều kiện phải thêm dấu ''; ví dụ if(tenbien[i] == '0').
=> song ^^
*/
int main()
{
    int n, all, i;
    cout << "Vui nhap N:";
    cin >> n;
    all = 0;
    string kitu = to_string(n); // chuyen doi so sang dang sin
    for (i =0; i<kitu.length();i++)
    {
        if(kitu[i] == '0')
        {
            all+=1;
        }
    }
    cout << "Co tong cong: " << all << " So khong";

    return 0;

}
