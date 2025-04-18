#include "DaGiac.h"
#include <bits/stdc++.h>
using namespace std;

DaGiac::DaGiac(){}

void DaGiac::Nhap()
{
    cout << "Nhap so luong dinh: ";
    cin >> n;
    arr.resize(n);
    cout << "Nhap toa do cua " << n << " diem cua da giac:\n";
    for (int i=0; i<n; i++)
    {
        cout << "Nhap toa do dinh " << i+1 << ":\n";
        arr[i].Nhap();
    }
}

void DaGiac::Xuat()
{
    cout << "Toa do " << n << " dinh cua da giac:\n";
    for(int i=0; i<n; i++)
    {
        cout << "Diem " << i+1 << ": ";
        arr[i].Xuat();
    }
}

void DaGiac::TinhTien(double value)
{
    for(int i=0; i<n; i++)
    {
        arr[i].TinhTien(value);
    }
}

void DaGiac::PhongTo(double scale)
{
    for(int i=0; i<n; i++)
    {
        arr[i].PhongTo(scale);
    }
}

void DaGiac::ThuNho(double scale)
{
    for(int i=0; i<n; i++)
    {
        arr[i].ThuNho(scale);
    }
}
void DaGiac::Quay(double angle)
{
    for(int i=0; i<n; i++)
    {
        arr[i].Quay(angle);
    }
}

