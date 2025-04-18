#ifndef DATHUC_H
#define DATHUC_H
#include <vector>
using namespace std;

class DaThuc
{
private:
    int bac;                     // Sử dụng int thay vì double cho bậc
    std::vector<double> he_so;        // Vector lưu hệ số của đa thức
public:
    void Input();                // Nhập bậc và hệ số
    void Output();               // Xuất đa thức
    DaThuc operator + (const DaThuc& another); // Toán tử cộng
    DaThuc operator - (const DaThuc& another); // Toán tử trừ
    void Cal(int x);
};

#endif // DATHUC_H
