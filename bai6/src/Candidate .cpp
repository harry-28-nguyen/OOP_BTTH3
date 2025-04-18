#include "Candidate .h"
#include <iostream>
using namespace std;

void Candidate::Nhap()
{
    cout << "Nhap ma so hoc sinh: "; cin >> ma;
    cout << "Nhap ho va ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap ngay thang nam sinh: "; cin >> date_of_birth;
    cout << "Nhap diem toan (0-10): "; cin >> dToan;
    cout << "Nhap diem anh (0-10): "; cin >> dAnh;
    cout << "Nhap diem van (0-10): "; cin >> dVan;
}

void Candidate::Xuat()
{
    cout << ma << " | " << hoTen << " | " << date_of_birth << " | Toan: " << dToan << " | Anh: " << dAnh << " | Van: " << dVan << "\n";
}

double Candidate::Tong_Diem()
{
    return dToan+dVan+dAnh;
}
