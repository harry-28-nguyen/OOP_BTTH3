#include "DSPhanSo.h"
#include <iostream>
#include <vector>
using namespace std;

DSPhanSo::DSPhanSo(){}

DSPhanSo::~DSPhanSo()
{
    delete[] DS;
}

void DSPhanSo::TinhTong()
{
    PhanSo sum = DS[0];
    for(int i=1; i<n; i++)
    {
        sum = sum + DS[i];
    }
    sum.Xuat();
    cout << endl;
}

void DSPhanSo::TimPS_MAX()
{
    PhanSo tmp = DS[0];
    for(int i=0; i<n; i++)
    {
        if(tmp < DS[i])
        {
            tmp = DS[i];
        }
    }
    tmp.Xuat();
}

void DSPhanSo::TimPS_MIN()
{
    PhanSo tmp = DS[0];
    for(int i=0; i<n; i++)
    {
        if(tmp > DS[i])
        {
            tmp = DS[i];
        }
    }
    tmp.Xuat();
}

void DSPhanSo::Tim_MaxTu_NguyenTo()
{
    PhanSo M(0,1);
    for(int i=0; i<n; i++)
    {
        if(DS[i].Check_SNT() && DS[i] > M)
        {
            M = DS[i];
        }
    }
    M.Xuat();
}

void DSPhanSo::Sort_Descend()
{
    for(int i=0; i<n-1; i++)
    {
        int M = i;
        for(int j= i+1; j<n; j++)
        {
            if(DS[j] > DS[M]) M = j;
        }
        swap(DS[i], DS[M]);
    }
}

void DSPhanSo::Sort_Acsend()
{
    for(int i=0; i<n-1; i++)
    {
        int m = i;
        for(int j= i+1; j<n; j++)
        {
            if(DS[j] < DS[m]) m = j;
        }
        swap(DS[i], DS[m]);
    }
}

void DSPhanSo::menu()
{
    while (1)
    {
        cout << "--------------------==MENU==--------------------\n";
        cout << "1. Nhap danh sach phan so.\n";
        cout << "2. Tinh tong danh sach phan so.\n";
        cout << "3. Tim phan so lon nhat.\n";
        cout << "4. Tim phan so nho nhat.\n";
        cout << "5. Tim phan so co tu la so nguyen to lon nhat.\n";
        cout << "6. Sap xep danh sach phan so tang dan.\n";
        cout << "7. Sap xep danh sach phan so giam dan.\n";
        cout << "0. Thoat chuong tirnh.\n";
        cout << "--------------------========--------------------\n";
        cout << "Nhap lua chon (0-6): "; cin >> lc;
        switch(lc)
        {
        case 1:
            {
                cout << "Nhap so luong phan so: ";
                cin >> n;
                DS = new DSPhanSo[n];
                for(int i=0; i<n; i++)
                {
                    cout << "Nhap phan so " << i+1 << " :\n";
                    DS[i].Nhap();
                }

                cout << "Danh sach phan so: {";
                for (int i=0; i<n; i++)
                {
                    DS[i].Xuat();
                    if (i != n-1) cout << ", ";
                }
                cout << "}\n";
                    break;
                }
        case 2:
            cout << "Tong cua day phan so: S = ";
            this->TinhTong();
            break;
        case 3:
            cout << "Phan so lon nhat trong mang: ";
            this->TimPS_MAX();
            cout << endl;
            break;
        case 4:
            cout << "Phan so nho nhat trong mang: ";
            this->TimPS_MIN();
            cout << endl;
            break;
        case 5:
            cout << "Phan so co tu so la so nguyen to lon nhat: ";
            this->Tim_MaxTu_NguyenTo();
            cout << endl;
            break;
        case 6:
            cout << "Danh sach phan so tang dan: {";
            this->Sort_Acsend();
            for (int i=0; i<n; i++)
            {
                DS[i].Xuat();
                if (i != n-1) cout << ", ";
            }
            cout << "}\n";
            break;
        case 7:
            cout << "Danh sach phan so giam dan: {";
            this->Sort_Descend();
            for (int i=0; i<n; i++)
            {
                DS[i].Xuat();
                if (i != n-1) cout << ", ";
            }
            cout << "}\n";
            break;
        case 0:
            cout << "THOAT CHUONG TRINH!\nTAM BIET VA HEN GAP LAI!";
            return;
        }
    }
}


