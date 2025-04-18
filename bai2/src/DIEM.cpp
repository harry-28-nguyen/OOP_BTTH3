#include "DIEM.h"
#include <iostream>
#include <cmath>
using namespace std;

DIEM::DIEM(){}

void DIEM::Nhap()
{
    cout << "Nhap toa do x: "; cin >> dx;
    cout << "Nhap toa do y: "; cin >> dy;
}

void DIEM::Xuat()
{
    cout << "(" << dx << "," << dy << ")\n";
}

void DIEM::TinhTien(double value)
{
    DIEM tmp;
    tmp.dx = dx + value;
    tmp.dy = dy + value;
    tmp.Xuat();
}

void DIEM::PhongTo(double scale)
{
    DIEM tmp;
    tmp.dx = dx * scale;
    tmp.dy = dy * scale;
    tmp.Xuat();
}

void DIEM::ThuNho(double scale)
{
    DIEM tmp;
    tmp.dx = dx / scale;
    tmp.dy = dy / scale;
    tmp.Xuat();
}

void DIEM::Quay(double angle)
{
    DIEM tmp;
    double tmp_angle = angle * M_PI / 180.0;
    tmp.dx = dx * cos(tmp_angle) - dy * sin(tmp_angle);
    tmp.dy = dx * sin(tmp_angle) + dy * cos(tmp_angle);
    tmp.Xuat();
}
