#ifndef DSPHANSO_H
#define DSPHANSO_H

#include <PhanSo.h>


class DSPhanSo : public PhanSo
{
    public:
        DSPhanSo();
        ~DSPhanSo();
        void Nhap();
        void Xuat();
        void TinhTong();
        void TimPS_MAX();
        void TimPS_MIN();
        void Tim_MaxTu_NguyenTo();
        void Sort_Descend();
        void Sort_Acsend();
        void menu();
    private:
        int n; // số lượng phân số.
        PhanSo *DS; // mảng lưu trữ các phân số.
        int lc; // lựa chọn chức năng hàm muốn thực hiện.
};

#endif // DSPHANSO_H
