#ifndef DAGIAC_H
#define DAGIAC_H

#include <DIEM.h>
#include <vector>


class DaGiac : public DIEM
{
    public:
        DaGiac();
        void Nhap();
        void Xuat();
        void TinhTien(double value);
        void PhongTo(double scale);
        void Quay(double angle);
        void ThuNho(double scale);

    private:
        int n; // số lượng đỉnh của đa giác.
        std::vector<DIEM> arr; // VECTOR lưu trữ các đỉnh.
};

#endif // DAGIAC_H
