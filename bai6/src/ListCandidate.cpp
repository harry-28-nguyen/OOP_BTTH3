#include "ListCandidate.h"
#include <iostream>
using namespace std;

void ListCandidate::Nhap()
{
    cout << "Nhap so luong hoc sinh: "; cin >> n;
    hocsinh.resize(n);
    for(int i=0; i<n; i++)
    {
        cout << "Nhap thong tin hoc sinh " << i+1 << ":\n";
        hocsinh[i].Nhap();
    }
}

void ListCandidate::Xuat()
{
    cout << "Danh sach hoc sinh:\n";
    for(int i=0; i<n; i++)
    {
        hocsinh[i].Xuat();
    }
}

void ListCandidate::TongDiem_greaterthan5()
{
    bool checked = false;
    cout << "Danh sach hoc sinh co tong diem > 15:\n";
    for(int i=0; i<n; i++)
    {
        if(hocsinh[i].Tong_Diem() > 15)
            hocsinh[i].Xuat();
            checked = true;
    }
    if(!checked) cout << "Khong co!\n";
}

void ListCandidate::MaxTongDiem()
{
    int M_diem = hocsinh[0].Tong_Diem();
    for(int i=1; i<n; i++)
    {
        if(M_diem < hocsinh[i].Tong_Diem())
            hocsinh[i].Xuat();
    }
}

void ListCandidate::Sort()
{
    int M;
    for(int i=0; i<n-1; i++)
    {
        M = i;
        for(int j=i+1; j<n; j++)
        {
            if(hocsinh[j].Tong_Diem() > hocsinh[M].Tong_Diem()) M = j;
        }
        if(M != i) swap(hocsinh[M], hocsinh[i]);
    }
}

void ListCandidate::menu()
{
    while(1)
    {
        cout << "---------------------------==MENU==----------------------------------------\n";
        cout << "1.Nhap danh sach hoc sinh.\n";
        cout << "2.Xuat danh sach hoc sinh.\n";
        cout << "3.Xuat danh sach hoc sinh co tong diem lon hon 15.\n";
        cout << "4.Hoc sinh co tong diem cao nhat.\n";
        cout << "5.Xuat danh sach hoc sinh giam dan theo tong diem.\n";
        cout << "0.Thoat chuong trinh.\n";
        cout << "---------------------------========----------------------------------------\n";
        cout << "Vui long nhap lua chon: "; cin >> lc;
        switch(lc)
        {
        case 1:
            this->Nhap();
            break;
        case 2:
            this->Xuat();
            break;
        case 3:
            this->TongDiem_greaterthan5();
            break;
        case 4:
            cout << "Hoc sinh co tong diem cao nhat:\n";
            this->MaxTongDiem();
            break;
        case 5:
            this->Sort();
            this->Xuat();
            break;
        case 0:
            cout << "Thoat chuong trinh!\nCam on va hen gap lai!";
            return;
        }
    }
}
