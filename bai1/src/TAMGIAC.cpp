#include "TAMGIAC.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


TAMGIAC::TAMGIAC()
{}

TAMGIAC::~TAMGIAC()
{}

void TAMGIAC::Nhap()
{
    cout << "Nhap toa do cua 3 diem trong tam giac:\n";
    cout << "Diem 1:\n"; A.Nhap();
    cout << "Diem 2:\n"; B.Nhap();
    cout << "Diem 3:\n"; C.Nhap();
}

void TAMGIAC::Xuat()
{
    cout << "Toa do 3 dinh cua tam giac:\n";
    cout << "Diem A: "; A.Xuat();
    cout << "Diem B: "; B.Xuat();
    cout << "Diem C: "; C.Xuat();
    cout << "Tam giac co do dai 3 canh: \n";

    size_AB = sqrt(pow(B.GetToaDoX() - A.GetToaDoX(), 2) + pow(B.GetToaDoY() - A.GetToaDoY(), 2));
    size_AC = sqrt(pow(C.GetToaDoX() - A.GetToaDoX(), 2) + pow(C.GetToaDoY() - A.GetToaDoY(), 2));
    size_BC = sqrt(pow(B.GetToaDoX() - C.GetToaDoX(), 2) + pow(B.GetToaDoY() - C.GetToaDoY(), 2));

    cout << "AB = " << setprecision(2) << size_AB;
    cout << "\nAC = " << setprecision(2) << size_AC;
    cout << "\nBC = " << setprecision(2) << size_BC;
}

void TAMGIAC::TinhTien(double value)
{
    A.TinhTien(value);
    B.TinhTien(value);
    C.TinhTien(value);
}

void TAMGIAC::PhongTo(double scale)
{
    A.PhongTo(scale);
    B.PhongTo(scale);
    C.PhongTo(scale);
}

void TAMGIAC::ThuNho(double scale)
{
    A.ThuNho(scale);
    B.ThuNho(scale);
    C.ThuNho(scale);
}
void TAMGIAC::Quay(double angle)
{
    A.Quay(angle);
    B.Quay(angle);
    C.Quay(angle);
}

bool TAMGIAC::Check_DiemThangHang()
{
    // vector AB,AC,BC có kiểu biến là DIEM.
    DIEM AB(B.GetToaDoX() - A.GetToaDoX(), B.GetToaDoY() - A.GetToaDoY());
    DIEM AC(C.GetToaDoX() - A.GetToaDoX(), C.GetToaDoY() - A.GetToaDoY());
    DIEM BC(C.GetToaDoX() - B.GetToaDoX(), C.GetToaDoY() - B.GetToaDoY());

    // Dùng tích có hướng để kiểm tra có thẳng hàng hay không.
    double TichCoHuong = AB.GetToaDoX()*AC.GetToaDoY()-AB.GetToaDoY()*AC.GetToaDoX();
    if(fabs(TichCoHuong) < 1e-9)
    {
        return false;// số gần bằng 0 cũng được coi là bằng 0.
    }
    else return true;
}

void TAMGIAC::PhanLoai()
{
    if(Check_DiemThangHang() == false)
    {
        cout << "3 diem thang hang! khong tao thanh tam giac duoc!\n";
        return;
    }

    if (pow(size_AB,2) + pow(size_AC,2) == pow(size_BC,2) || pow(size_AB,2) + pow(size_BC,2) == pow(size_AC,2) || pow(size_BC,2) + pow(size_AC,2) == pow(size_AB,2))
    {
        cout << "Loai: Tam giac vuong\n";
    }
    else if (size_AB == size_BC || size_AC == size_AB || size_BC == size_AC)
    {
        cout << "Loai: Tam gia can\n";
    }
    else if (size_AB == size_BC && size_AB == size_AC)
    {
        cout << "Loai: Tam giac deu\n";
    }
    else cout << "Loai: Tam giac thuong\n";
}

void TAMGIAC::TinhDienTich()
{
    if(Check_DiemThangHang() == false)
    {
        cout << "3 diem thang hang! khong tao thanh tam giac duoc!\n";
        return;
    }

    double S = ((B.GetToaDoX()-A.GetToaDoX())*(C.GetToaDoY()-A.GetToaDoY()) - (C.GetToaDoX()-A.GetToaDoX())*(B.GetToaDoY()-A.GetToaDoY()));
    cout << "Dien tich tam giac: S = " << fabs(S) * 0.5;
}

void TAMGIAC::TinhChuVi()
{
    if(Check_DiemThangHang() == 0)
    {
        cout << "3 diem thang hang! khong tao thanh tam giac duoc!\n";
        return;
    }

    double P = size_AB + size_AC + size_BC;
    cout << "Chu vi tam giac: P = " << P;
}
