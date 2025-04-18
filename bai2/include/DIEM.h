#ifndef DIEM_H
#define DIEM_H


class DIEM
{
    public:
        DIEM();
        void Nhap();
        void Xuat();
        void TinhTien(double value);
        void PhongTo(double scale);
        void Quay(double angle);
        void ThuNho(double scale);
    private:
        double dx, dy;
};

#endif // DIEM_H
