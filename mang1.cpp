#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "Nhap n";

	cin >> n;

	int A[n] = {};

	for(int i=1;i<=n;i++)

    {

        cout << "phan tu" << i << "=";

        cin >> A[i];

    }

    // tổng các phần tử
    int sall;

    sall =0;


    // tong so hang duong
    int s_duong = 0;

    int count_duong = 0;

    int s_am = 0;

    int count_am = 0;

    int dautien_khongam, dautien_khongamcheck = 0;

    int dautien_coam, dautien_coam_check = 0;

    int cuoicung_khongam, cuoicung_coam =0;

    int solonnhat;

    int sonhonhat;

    int soamlonnhat =0, soamnhonhat = 0;

    int solonthunhi;

    int sonhothunhi;

    int soduonglientiep = 0;

    int soamlientiep = 0;

    int tonglientiep  = 0;

    int soluonglientiep = 0;
    // so am - string
    int chuoiam  = 0;
    int dmax = 0;
    int d = 1;
    int cache_soamcong;
    int total_soamcong;
    
    /// bien 15 + 16
    int dcong = 1;
    int value_cong = 0;
    int cache_soduongcong;
    /// end
    for(int i=1;i<=n;i++)
    {
        /// bai 15 + 16
        
        if(A[i] >0)
        {
            if(cache_soduongcong == NUlL)
            {
                cache_soduongcong = A[i];
            }
            if(A[i]+1 >0)
            {
                
                dcong+=1;
            }
            else
            {
                if(value_cong < dcong)
                {
                    value_cong = dcong;
                }
                dcong = 1;
            }
        }
        
        /// bai 17 + 18 
        if(A[i] < 0)
        {
            if(cache_soamcong == NULL)
            {
                cache_soamcong = A[i];
            }
            if(A[i+1] < 0)
            {
                d+=1;
                cache_soamcong+= A[i+1];
            }
            else
            {
                if(total_soamcong == NULL)
                {
                    total_soamcong = cache_soamcong;
                }
                /// dut chuoi....
                if(total_soamcong < cache_soamcong)
                {
                    total_soamcong = cache_soamcong;
                }
                cout << "\n" <<cache_soamcong ;
                cache_soamcong = 0;
                if(dmax < d)
                {
                    dmax = d;
                }

                d=1;
            }

        }
        
        //end 



        sall+=A[i]; // tổng

        // số lớn nhất

        if(solonnhat == NULL) solonnhat = A[i];

        if(solonnhat < A[i]) solonnhat = A[i];

        //số nhỏ nhất
        if(sonhonhat == NULL) sonhonhat = A[i];

        if(sonhonhat > A[i]) sonhonhat = A[i];
        // so nho thu nhi

        if(A[i] >=0)
        {
            cuoicung_khongam = A[i];

            s_duong+=A[i];

            count_duong+=1;

            if(dautien_khongamcheck <=0)
            {

                dautien_khongam = A[i];

                dautien_khongamcheck=1;

            }

        }

        else

        {

            if(soamlonnhat == 0)

            {

                 soamlonnhat = A[i];

            }

            if(soamlonnhat < A[i])

            {

                soamlonnhat = A[i];

            }
            // so am nho nhat
            if(soamnhonhat == 0)

            {

                soamnhonhat = A[i];

            }

            if(soamnhonhat > A[i]) soamnhonhat = A[i]; // set neu a>b;

            cuoicung_coam = A[i];

            s_am+=A[i];

            count_am+=1;

            if(dautien_coam_check <=0)

            {

                dautien_coam_check = 1;

                dautien_coam = A[i];

            }

        }

    }

    ///for dành cho số lớn thứ nhì
    sonhothunhi = solonnhat; //set so nho nhat = lon nhat

    for(int i=1;i <=n;i++)

    {
        // số lớn thứ nhì

        if(solonthunhi == NULL && A[i] < solonnhat) solonthunhi = A[i];

        if(A[i] < solonnhat && A[i] > solonthunhi)

        {

            solonthunhi = A[i];

        }
        /*
        ví dụ : 1 2 3 4 5
        nhỏ nhất : 1
        nhỏ nhì : ?
        lớn nhất : 5;
        */

        if(sonhothunhi > A[i] && A[i] > sonhonhat && A[i] < solonnhat) sonhothunhi = A[i];

    }


    // show
    cout << "\n S duong=" << s_duong << " so duong la :" << count_duong;

    cout << "\n S am=" << s_am << " so am la :" << count_am;

    cout << "\n tong phan tu=" << sall;

    if(count_duong >=1) // dk kh se loi

    {

        cout << "\n Trung binh cong cua ca day=" << (sall/(count_am+count_duong));

        cout << "\n Trung binh cong cua day duong=" << (s_duong/(count_duong));

    }
    if(count_am >=1) //dk tránh lỗi

    {

        cout << "\n Trung binh cong cua day am=" << (s_am/(count_am));

    }
    cout << "\n Phan tu dau tien khong am=" << dautien_khongam << "Phan tu cuoi cung khong am" << cuoicung_khongam ;

    cout << "\n Phan tu dau tien co am=" << dautien_coam << "Phan tu cuoi cung co am" << cuoicung_coam ;

    cout << "\n so nho nhat=" << sonhonhat << " so lon nhat" << solonnhat ;

    cout << "\n so am nho nhat=" << soamnhonhat << " so am lon nhat" << soamlonnhat ;

    cout << "\n so lon thu nhi=" << solonthunhi << " so nho thu nhi" << sonhothunhi ;

    cout << "\n so duong lien tiep=" << soduonglientiep  ;

    cout << "\n so luong lien co tong tiep la" << soluonglientiep << "co tong =" << tonglientiep;

        cout << "\n Chuoi am" << dmax << "tong lon nhat" << total_soamcong;









}
