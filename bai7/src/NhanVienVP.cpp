#include "NhanVienVP.h"
#include <bits/stdc++.h>
using namespace std;

void NhanVienVP::Nhap()
{
    cout << "Nhap ma nhan vien: ";
    cin >> maNV;

    cin.ignore();
    cout << "Nhap ho va ten: ";
    getline(cin, hoTen);

    cout << "Nhap nam sinh: ";
    cin >> namSinh;

    cout << "Nhap luong: ";
    cin >> luong;
}

void NhanVienVP::Xuat()
{
    cout << maNV << " | " << hoTen << " | nam sinh: " << namSinh << " | luong: " << luong << " dong\n";
}

long long NhanVienVP::GetLuong()
{
    return luong;
}

int NhanVienVP::GetTuoi()
{
    return (2025-namSinh);
}

void NhanVienVP::MaxLuong(vector<NhanVienVP> a, int n)
{
    long long M = 0;
    int id;
    for (int i=0; i<n; i++)
    {
        if (M < a[i].GetLuong())
        {
            M  = a[i].GetLuong();
            id = i;
        }
    }
    a[id].Xuat();
}

long long NhanVienVP::Tong_Luong(vector<NhanVienVP> a, int n)
{
    long long tong=0;
    for (int i=0; i<n; i++)
    {
        tong += a[i].GetLuong();
    }
    return tong;
}

void NhanVienVP::MaxTuoi(vector<NhanVienVP> a, int n)
{
    int M_tuoi;
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

void NhanVienVP::Sort(vector<NhanVienVP> &a, int n)
{
    for (int i=1; i<n; i++)
    {
        NhanVienVP e = a[i];
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
