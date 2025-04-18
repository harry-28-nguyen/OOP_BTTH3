#ifndef PHANSO_H
#define PHANSO_H


class PhanSo
{
private:
    int iTu, iMau;
public:
    PhanSo();
    PhanSo(int a, int b);
    void Nhap();
    void Xuat();
    int GetTu();
    int GetMau();
    int UCLN(int a, int b);
    int BCNN(int a, int b);
    void QuyDong(PhanSo &b);
    void RutGon();
    bool Check_SNT();
    PhanSo operator + (PhanSo another);
    bool operator > (const PhanSo another) const;
    bool operator < (const PhanSo another) const;
    PhanSo &operator = (const PhanSo another);
};

#endif // PHANSO_H
