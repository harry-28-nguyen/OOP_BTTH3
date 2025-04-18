#include <iostream>
#include "NhanVienVP.h"

using namespace std;

int main()
{
    vector<NhanVienVP> a;
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cout << "Nhap nhan vien " << i+1 << ":\n";
        NhanVienVP nv;
        nv.Nhap();
        a.push_back(nv);
    }
    cout << "Danh sach nhan vien: \n";
    for (auto x:a)
    {
        x.Xuat();
    }

    cout << "-------------------------------------------------------------------------------\n";
    cout << "Nhap vien co luong cao nhat: \n";
    a[0].MaxLuong(a,n);

    cout << "-------------------------------------------------------------------------------\n";
    cout << "Tong luong cty phai tra: " << a[0].Tong_Luong(a,n) << " dong\n";

    cout << "-------------------------------------------------------------------------------\n";
    cout << "Nhan vien co tuoi cao nhat: \n";
    a[0].MaxTuoi(a,n);

    cout << "-------------------------------------------------------------------------------\n";
    cout << "Danh sach nhan vien sau khi sap xep theo luong: \n";
    a[0].Sort(a,n);
    for (auto x:a)
    {
        x.Xuat();
    }
    return 0;
}
