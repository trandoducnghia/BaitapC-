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
    int total_soduongcong;
    /// bien 15 + 16
    int dcong = 1;
    int value_cong = 0;
    int cache_soduongcong;
    /// end
    int log_dansen = 1;
    int dansen = 0;

    int log_khongtang = 1;
    int khongtang = 0;

    int log_giam = 1;
    int giam = 0;

    int log_tang = 1;
    int tang = 0;
    int t[n] = {};
    int log_day = 0;
    for(int i=1;i<=n;i++)
    {

        if(A[i] >=1)
        {
            log_day+=1;
        }
        else
        {
            log_day = 0;
        }
        t[i] = log_day;
        cout << t[i];

        // khoe bien doancon;
        /// end
        /// so luong cac phan tu tang nhieu nhat
        /*
        if(A[i] < A[i+1]) // Ai phai nho hon Ai+1
        {
            log_tang+=1;
        }
        else // mat chuoi
        {
            if(tang < log_tang && log_tang >1)
            {
                tang = log_tang;
            }
            log_tang = 1;
        }
        /// END
        /// so luong cac phan tu giam nhieu nhat
        if(A[i] > A[i+1]) // Ai phai lon hon Ai+1
        {
            log_giam+=1; // set log
        }
        else // dut chuoi
        {
            if(log_giam > giam && log_giam >1) // neu log lon hon output
            {
                giam = log_giam;
            }
            log_giam = 1; // set max dinh;
        }
        //end
        //// doan khong tang (A = A[+1]
        if(A[i] == A[i+1]) // neu Ai = Ai+1
        {
            log_khongtang+=1;
        }
        else // dut chuoi
        {
            if(khongtang < log_khongtang && log_khongtang >1)
            {
                khongtang= log_khongtang;
            }
            log_khongtang = 1;
        }

        ///doan dan xen nhau
        if(A[i] < 0 && A[i+1] >0 || A[i] >0 && A[i+1] <0) // Neu A hien tai am va A+1 duong hoac A hien tai duong va A+1 am
        {
            log_dansen+=1;
        }
        else // neu khong ton tai se mat chuoi
        {
            if(dansen < log_dansen && log_dansen >1)
            {
                dansen = log_dansen;
            }
            log_dansen=1;
        }
        /// END

        /// bai 15 + 16

        if(A[i] >0)
        {
            if(cache_soduongcong == NULL)
            {
                cache_soduongcong = A[i];
            }
            if(A[i+1] >0)
            {
                cache_soduongcong+= A[i+1];
                dcong+=1;
            }
            else
            {
                if(total_soduongcong == NULL)
                {
                    total_soduongcong = cache_soduongcong;
                }
                else
                {
                    if(total_soduongcong < cache_soduongcong)
                    {
                        total_soduongcong = cache_soduongcong;
                    }
                }
                cache_soduongcong = NULL;
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
                cache_soamcong = NULL;
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
*/
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
     /// day con
     int doan = 0;
     int start = 0;
     int close = 0;
     int conlonnhat = 0;
     int demcon = 0;

     int tong_daycon = 0;
     int socong = 0;
     int log_tong = 0;
     int tong = 0;
     int demcapsocong = 0;
    for(int i=1;i<=n;i++)
    {
        if(t[i] == 1)
        {
            doan+=1;
            start = i;
            cout << "\ndoan " << doan << " ";
        }
        if(t[i] >=1)
        {
            cout << A[i] << ":";
            demcon+=1;


        }

        if(t[i] == 0 || i == n && demcon >=3)
        {
            int abc = NULL;
            for(int j = start;j<=i-1;j++)
            {
                if(abc == NULL)
                {
                    abc = abs(A[j]-A[j+1]); // gọi ra cấp số cộng vd 5- 2 => cs cong 3)
                }
                if(abs(A[j] - A[j+1]) == abc) /// neu tri tuyet doiaj - aj+1 =  abc
                {
                    log_tong+= A[j];
                    demcapsocong+=1;
                }
                else
                {
                    break;
                }
            }
            if(log_tong > tong)
            {
                tong = log_tong;
            }

        }

        if(demcon > conlonnhat) conlonnhat = demcon;
        if(t[i] == 0)
        {

            tong_daycon = 0;
            close = i-1;

        }
    }

    cout << tong;
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

    cout << "\n doan duong dai nhat" << value_cong << "co tong =" << total_soduongcong;
    cout << "\n so luong dan sen" << dansen;
    cout << "\n so luong cac phan tu khong tang nhieu nhat" << khongtang;
    cout << "\n so luong cac phan tu giam nhieu nhat" << giam;
    cout << "\n so luong cac phan tu tang nhieu nhat" << tang;






}
