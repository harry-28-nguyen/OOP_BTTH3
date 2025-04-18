#include <iostream>
#include <cmath>
#include <iomanip>
#include "TAMGIAC.h"
using namespace std;

int main()
{
    TAMGIAC test1;
    test1.Nhap();
    test1.Xuat();
    while(1)
    {
        cout << "\n------------==MENU THUC HIEN THAO TAC==------------\n";
        cout << "1.Tinh tien tam giac.\n";
        cout << "2.Phong to tam giac.\n";
        cout << "3.Thu nho tam giac.\n";
        cout << "4.Quay tam giac.\n";
        cout << "5.Phan loai tam giac.\n";
        cout << "6.Tinh dien tich tam giac.\n";
        cout << "7.Tinh chu vi tam giac.\n";
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
                cout << "Tam giac sau khi tinh tien " << value_tinhtien << ":\n";
                test1.TinhTien(value_tinhtien);
                break;
            }
        case 2:
            {
                double value_phongto;
                cout << "Nhap gia tri muon phong to: "; cin >> value_phongto;
                cout << "Tam giac sau khi phong to " << value_phongto << " lan:\n";
                test1.PhongTo(value_phongto);
                break;
            }
        case 3:
            {
                double value_thunho;
                cout << "Nhap gia tri muon thu nho: "; cin >> value_thunho;
                cout << "Tam giac sau khi thu nho " << value_thunho << " lan:\n";
                test1.ThuNho(value_thunho);
                break;
            }
        case 4:
            {
                double value_goc;
                cout << "Nhap gia tri goc muon quay: "; cin >> value_goc;
                cout << "Tam giac sau khi quay " << value_goc << " do:\n";
                test1.Quay(value_goc);
                break;
            }
        case 5:
            test1.PhanLoai();
            break;
        case 6:
            test1.TinhDienTich();
            break;
        case 7:
            test1.TinhChuVi();
            break;
        case 0:
            cout << "THOAT CHUONG TRINH!\nCAM ON VA HEN GAP LAI!";
            return 0;
        }
    }
}
