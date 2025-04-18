#ifndef NHANVIENSX_H
#define NHANVIENSX_H
#include <string>
#include <vector>

class NhanVienSX
{
private:
    std::string maNV;
    std::string hoTen;
    int namSinh;
    int sp_gia_cong;
    double gia_sp;
public:
    NhanVienSX(): maNV(" "), hoTen(" "), namSinh(0), sp_gia_cong(0), gia_sp(){}
    void Nhap();
    void Xuat();
    double GetLuong();
    int GetTuoi();
    void MinLuong(std::vector<NhanVienSX> a, int n);
    double Tong_Luong(std::vector<NhanVienSX> a, int n);
    void MaxTuoi(std::vector<NhanVienSX> a, int n);
    void Sort(std::vector<NhanVienSX> &a, int n);
};

#endif // NHANVIENSX_H
