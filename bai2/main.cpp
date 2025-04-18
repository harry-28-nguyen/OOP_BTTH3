#include <bits/stdc++.h>
#include "DaGiac.h"

using namespace std;

int main()
{
    DaGiac test1;
    test1.Nhap();
    test1.Xuat();

    while(1)
    {
        cout << "\n------------==MENU THUC HIEN THAO TAC==------------\n";
        cout << "1.Tinh tien da giac.\n";
        cout << "2.Phong to da giac.\n";
        cout << "3.Thu nho da giac.\n";
        cout << "4.Quay da giac.\n";
        cout << "0.Thoat chuong trinh.\n";
        cout << "------------------===============------------------\n";
        int lc;
        cout << "Nhap lua chon (0-4): "; cin >> lc;
        switch(lc)
        {
        case 1:
            {
                double value_tinhtien;
                cout << "Nhap gia tri muon tinh tien: "; cin >> value_tinhtien;
                cout << "Da giac sau khi tinh tien " << value_tinhtien << ":\n";
                test1.TinhTien(value_tinhtien);
                break;
            }
        case 2:
            {
                double value_phongto;
                cout << "Nhap gia tri muon phong to: "; cin >> value_phongto;
                cout << "Da giac sau khi phong to " << value_phongto << " lan:\n";
                test1.PhongTo(value_phongto);
                break;
            }
        case 3:
            {
                double value_thunho;
                cout << "Nhap gia tri muon thu nho: "; cin >> value_thunho;
                cout << "Da giac sau khi thu nho " << value_thunho << " lan:\n";
                test1.ThuNho(value_thunho);
                break;
            }
        case 4:
            {
                double value_goc;
                cout << "Nhap gia tri goc muon quay: "; cin >> value_goc;
                cout << "Da giac sau khi quay " << value_goc << " do:\n";
                test1.Quay(value_goc);
                break;
            }
        case 0:
            cout << "--==THOAT CHUONG TRINH! CAM ON VA HEN GAP LAI!==--";
            return 0;
        }
    }
    return 0;
}
