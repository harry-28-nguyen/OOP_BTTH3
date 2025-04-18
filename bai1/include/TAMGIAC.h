#ifndef TAMGIAC_H
#define TAMGIAC_H

#include <DIEM.h>


class TAMGIAC : public DIEM
{
    public:
        TAMGIAC();
        ~TAMGIAC();
        void Nhap();
        void Xuat();
        void TinhTien(double value);
        void PhongTo(double scale);
        void Quay(double angle);
        void ThuNho(double scale);
        bool Check_DiemThangHang();
        void PhanLoai();
        void TinhDienTich();
        void TinhChuVi();

    private:
        DIEM A,B,C;
        // độ dài của 3 cạnh tam giác.
        double size_AB;
        double size_AC;
        double size_BC;
};

#endif // TAMGIAC_H
