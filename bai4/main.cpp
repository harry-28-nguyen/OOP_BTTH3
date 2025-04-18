#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    Array a;
    int lc;
    while(1)
    {
        cout << "-----------------==MENU==-----------------\n";
        cout << "1.Nhap mang.\n";
        cout << "2.Xuat mang.\n";
        cout << "3.Dem so lan xuat hien cua key X.\n";
        cout << "4.Kiem tra mang co tang dan?\n";
        cout << "5.Tim phan tu key X.\n";
        cout << "6.Tim phan tu le nho nhat.\n";
        cout << "7.Tim phan tu SNT lon nhat.\n";
        cout << "8.Sap xep mang tang dan.\n";
        cout << "9.Sap xep mang giam dan.\n";
        cout << "0.Thoat chuong trinh.\n";
        cout << "-----------------=========-----------------\n";
        cout << "Vui long nhap lua chon: ";
        cin >> lc;
        switch(lc)
        {
        case 1:
            a.Input();
            break;
        case 2:
            cout << "Mang: ";
            a.Output();
            break;
        case 3:
            {
                int x;
                cout << "Nhap gia tri muon biet: "; cin >> x;
                cout << "So " << x << " xuat hien: " << a.Count(x) << " lan\n";
                break;
            }
        case 4:
            {
                bool ascending = true;
                if(a.check_Ascending(ascending))
                    cout << "Mang dung thu tu!\n";
                else cout << "Mang khong dung thu tu!\n";
                break;
            }
        case 5:
            {
                int x;
                cout << "Nhap gia tri muon tim: ";
                cin >> x;
                if(a.Find(x))
                {
                    cout << "FOUND!\n";
                }else cout << "NOT FOUND!\n";
                break;
            }
        case 6:
            a.Find_minOdd();
            break;
        case 7:
            a.Find_MaxSNT();
            break;
        case 8:
            cout << "Mang sap xep thu tu tang dan: ";
            a.Sort_Ascending();
            a.Output();
            break;
        case 9:
            cout << "Mang sap xep thu tu giam dan: ";
            a.Sort_Descending();
            a.Output();
            break;
        case 0:
            cout <<"THOAT CHUONG TRINH\nCAM ON VA HEN GAP LAI!";
            return 0;
        }
    }
}
