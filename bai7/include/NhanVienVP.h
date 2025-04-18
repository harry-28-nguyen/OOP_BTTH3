#ifndef NHANVIENVP_H
#define NHANVIENVP_H
#include <string>
#include <vector>

class NhanVienVP
{
private:
    std::string maNV;
    std::string hoTen;
    int namSinh;
    long long luong;
public:
    NhanVienVP(): maNV(" "), hoTen(" "), namSinh(0), luong(0){}
    void Nhap();
    void Xuat();
    long long GetLuong();
    int GetTuoi();
    void MaxLuong(std::vector<NhanVienVP> a, int n); // vector lưu danh sách n nhân viên.
    long long Tong_Luong(std::vector<NhanVienVP> a, int n);
    void MaxTuoi(std::vector<NhanVienVP> a, int n);
    void Sort(std::vector<NhanVienVP> &a, int n);
};



#endif // NHANVIENVP_H
