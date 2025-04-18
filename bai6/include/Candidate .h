#ifndef CANDIDATE _H
#define CANDIDATE _H
#include <string>

class Candidate
{
private:
    std::string ma; // ma hoc sinh
    std::string hoTen;
    std::string date_of_birth;
    double dToan, dVan, dAnh;
public:
    Candidate(): ma(" "), hoTen(" "), date_of_birth(" "), dToan(0), dVan(0), dAnh(0){}
    void Nhap();
    void Xuat();
    double Tong_Diem();
};

#endif // CANDIDATE _H
