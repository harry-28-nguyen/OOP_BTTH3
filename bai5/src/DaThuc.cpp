#include "DaThuc.h"
#include <bits/stdc++.h>
using namespace std;

void DaThuc::Input()
{
    cout << "Nhap bac cua da thuc: ";
    cin >> bac;
    he_so.resize(bac + 1); // Resize vector để lưu đủ hệ số
    cout << "Nhap cac he so (tu he so bac 0 den bac " << bac << "): ";
    for (int i = 0; i <= bac; i++)
    {
        cin >> he_so[i];
    }
}

void DaThuc::Output()
{
    cout << "Da thuc: ";
    bool first_term = true; // Đánh dấu hệ số đầu tiên được in ra

    for (int i = bac; i >= 0; i--)
    {
        if (he_so[i] != 0)  // Bỏ qua hệ số 0
        {
            if (!first_term) // Nếu không phải phần tử đầu tiên, in dấu '+/-'
            {
                if (he_so[i] > 0) cout << " + ";
                else cout << " - ";
            }
            else if (he_so[i] < 0) // Nếu phần tử đầu tiên âm, in dấu '-'
            {
                cout << "-";
            }

            // Hiển thị hệ số (trừ trường hợp hệ số là 1 hoặc -1 và có biến x)
            if (abs(he_so[i]) != 1 || i == 0)
            {
                cout << abs(he_so[i]);
            }

            // Hiển thị biến x và bậc
            if (i > 0)
            {
                cout << "x";
                if (i > 1) cout << "^" << i; // Chỉ in ^i nếu i > 1
            }

            first_term = false; // Đánh dấu đã in phần tử đầu tiên
        }
    }
    if (first_term) cout << "0"; // Nếu tất cả hệ số đều là 0, in ra "0"
    cout << endl;
}


// Toán tử cộng hai đa thức
DaThuc DaThuc::operator + (const DaThuc& another)
{
    DaThuc result;
    result.bac = max(bac, another.bac);
    result.he_so.resize(result.bac + 1, 0); // Đảm bảo kích thước

    for (int i = 0; i <= bac; i++) result.he_so[i] += he_so[i];
    for (int i = 0; i <= another.bac; i++) result.he_so[i] += another.he_so[i];

    // Loại bỏ bậc dư thừa
    while (result.bac > 0 && result.he_so[result.bac] == 0)
    {
        result.bac--;
    }

    return result;
}

// Toán tử trừ hai đa thức
DaThuc DaThuc::operator - (const DaThuc& another)
{
    DaThuc result;
    result.bac = max(bac, another.bac);
    result.he_so.resize(result.bac + 1, 0);

    for (int i = 0; i <= bac; i++) result.he_so[i] += he_so[i];
    for (int i = 0; i <= another.bac; i++) result.he_so[i] -= another.he_so[i];

    // Loại bỏ bậc dư thừa
    while (result.bac > 0 && result.he_so[result.bac] == 0)
    {
        result.bac--;
    }

    return result;
}

void DaThuc::Cal(int x)
{
    vector<int> vec_bac;
    for (int i=0; i<=bac; i++)
    {
        vec_bac.push_back(pow(x,i));
    }
    double result=0;
    for (int i=bac; i>=0; i--)
    {
        result += vec_bac[i]*he_so[i];
    }
    cout << result;
}
