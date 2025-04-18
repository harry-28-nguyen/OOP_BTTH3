#ifndef DIEM_H
#define DIEM_H


class DIEM
{
    public:
        DIEM();
        DIEM(double dx, double dy);
        void Nhap();
        void Xuat();
        double GetToaDoX();
        double GetToaDoY();
        void TinhTien(double value);
        void PhongTo(double scale);
        void Quay(double angle);
        void ThuNho(double scale);
        ~DIEM();
    private:
        double dx, dy;
};

#endif // DIEM_H
