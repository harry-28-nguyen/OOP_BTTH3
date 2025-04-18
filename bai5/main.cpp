#include <bits/stdc++.h>
#include "DaThuc.h"

using namespace std;

int main()
{
    DaThuc p1, p2, sum, diff;

    cout << "Nhap da thuc thu nhat:\n";
    p1.Input();
    cout << "Nhap da thuc thu hai:\n";
    p2.Input();

    cout << "Da thuc thu nhat: ";
    p1.Output();
    cout << "Da thuc thu hai: ";
    p2.Output();

    sum = p1 + p2;
    diff = p1 - p2;

    cout << "Tong hai da thuc: ";
    sum.Output();
    cout << "Hieu hai da thuc: ";
    diff.Output();

    int x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Da thuc p1 co gia tri khi x = " << x << ": "; p2.Cal(x);
}
