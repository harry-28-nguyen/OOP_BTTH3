#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo(){}

PhanSo::PhanSo(int a, int b)
{
    this->iTu = a;
    this->iMau = b;
}

void PhanSo::Nhap()
{
    cout << "Nhap tu so: "; cin >> iTu;
    do
    {
        cout << "Nhap mau so: "; cin >> iMau;
        if(iMau <= 0) cout << "So khong hop le! Vui long nhap lai!\n";
    }while(iMau <= 0);
}

void PhanSo::Xuat()
{
    // khi phân số có tử và mẫu đều âm.
     if (iTu < 0 && iMau < 0){
        iTu = -iTu;
        iMau = -iMau;
    }
    // khi phân số có mẫu âm và tử dương.
    else if (iTu > 0 && iMau < 0){
        iTu = -iTu;
        iMau = -iMau;
    }
    // khi phân số có mẫu bằng 1.
    else if (iMau == 1){
        cout << iTu;
    }
    // khi phân số có tử chia hết cho mẫu.
    else if (iTu%iMau == 0){
        cout << iTu/iMau;
    }
    // phân số đã được bình thường.
    else cout << iTu << "/" << iMau;
}

int PhanSo::GetMau()
{
    return iMau;
}

int PhanSo::GetTu()
{
    return iTu;
}

void PhanSo::RutGon()
{
    int uoc_chung = UCLN(iTu, iMau); //RÚT GỌN NẾU CẦN.
    iTu /= uoc_chung;
    iMau /= uoc_chung;
}

bool PhanSo::operator> (const PhanSo another) const
{
    return iTu * another.iMau > another.iTu * iMau;
}

bool PhanSo::operator< (const PhanSo another) const
{
    return iTu * another.iMau < another.iTu * iMau;
}

PhanSo &PhanSo::operator = (const PhanSo another)
{
    if (this != &another)
    {
        this->iTu = another.iTu;
        this->iMau = another.iMau;
    }
    return *this;
}

int PhanSo::UCLN(int a, int b)
{
    while (a * b != 0){
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        if (a >= b) a = a - b;
        if (b >= a) b = b - a;
    }
    int r = a+b;
    if (a == 0 && b == 0) return -1;
    else {
        if ( r < 0) return r = -r;
        else return r;
    }
}

int PhanSo::BCNN(int a, int b)
{
    return (a*b)/UCLN(a,b);
}

void PhanSo::QuyDong(PhanSo &b)
{
    int msc = BCNN(iMau, b.iMau);
    iTu *= (msc / iMau);
    b.iTu *= (msc / b.iMau);
    iMau = b.iMau = msc;
}

bool PhanSo::Check_SNT()
{
    if ( iTu == 0 || iTu == 1)
    {
        return 0;
    }else{
        for (int i=2; i<iTu; i++)
        {
            if (iTu%i==0)
            return 0;
        }
    }return 1;
}

PhanSo PhanSo::operator+(PhanSo another)
{
    PhanSo kq = *this;
    if (kq.iMau != another.iMau){
        kq.QuyDong(another);
        kq.iTu = kq.iTu + another.iTu;
    }
    else{
        kq.iTu = kq.iTu + another.iTu;
    }

    //RÚT GỌN NẾU CẦN.
    kq.RutGon();
    return kq;
}
