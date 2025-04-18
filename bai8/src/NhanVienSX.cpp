#include "NhanVienSX.h"
#include <iostream>
using namespace std;

void NhanVienSX::Nhap()
    {
        cout << "Nhap ma nhan vien: ";
        cin >> maNV;

        cin.ignore();
        cout << "Nhap ho va ten: ";
        getline(cin, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;

        cout << "Nhap so sp da gia cong: ";
        cin >> sp_gia_cong;

        cout << "Nhap don gia san pham: ";
        cin >> gia_sp;
    }

void NhanVienSX::Xuat()
{
    cout << maNV << " | " << hoTen << " | nam sinh: " << namSinh << " | luong: " << GetLuong() << " dong\n";
}

double NhanVienSX::GetLuong()
{
    return sp_gia_cong*gia_sp;
}

int NhanVienSX::GetTuoi()
{
    return (2025-namSinh);
}

void NhanVienSX::MinLuong(vector<NhanVienSX> a, int n)
{
    double m = a[0].GetLuong();
    int id;
    for (int i=0; i<n; i++)
    {
        if (m > a[i].GetLuong())
        {
            m  = a[i].GetLuong();
            id = i;
        }
    }
    a[id].Xuat();
}

double NhanVienSX::Tong_Luong(vector<NhanVienSX> a, int n)
{
    double tong=0;
    for (int i=0; i<n; i++)
    {
        tong += a[i].GetLuong();
    }
    return tong;
}

void NhanVienSX::MaxTuoi(vector<NhanVienSX> a, int n)
{
    int M_tuoi = 0;
    int id;
    for (int i=0; i<n; i++)
    {
        if (M_tuoi < a[i].GetTuoi())
        {
            M_tuoi = a[i].GetTuoi();
            id = i;
        }
    }
    a[id].Xuat();
}

void NhanVienSX::Sort(vector<NhanVienSX> &a, int n)
{
    for (int i=1; i<n; i++)
    {
        NhanVienSX e = a[i];
        int k;
        for (k=i-1; k>-1; k--)
        {
            if (e.GetLuong() > a[k].GetLuong())
                break;
            a[k+1] = a[k];
        }
        a[k+1] = e;
    }
}
