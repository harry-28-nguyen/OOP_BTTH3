#include "Array.h"
#include <iostream>
using namespace std;

Array::Array()
{
    arr = nullptr;
}

Array::Array(int n)
{
    arr = nullptr;
    this->capacity = n;
}

Array::~Array()
{
    delete[] arr;
}

void Array::Input()
{
    cout << "Nhap so luong phan tu: ";
    cin >> Size;
    this->capacity = Size;
    arr = new int[Size]; // cấp phát động cho mảng.
    for(int i=0; i<Size; i++)
    {
        cout << "arr[" << i <<"]:";
        cin >> arr[i];
    }
}

void Array::Output()
{
    for(int i=0; i<Size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Array::Count(int val)
{
    int cnt = 0;
    for(int i=0; i<Size; i++)
    {
        if(arr[i] == val) cnt++;
    }
    return cnt;
}

int Array::Find(int val) const
{
    for(int i=0; i<Size; i++)
    {
        if(arr[i] == val) return 1;
    }
    return 0;
}

void Array::Find_minOdd()
{
    int m = arr[0];
    for(int i=0; i<Size; i++)
    {
        if(arr[i]%2!=0 && arr[i]<m) m = arr[i];
    }
    cout << "Phan tu le nho nhat: " << m << endl;
}

bool Array::check_SNT(int n)
{
    if (n<2) return 0;
    else
    {
        for(int i=2; i<n; i++)
        {
            if(n%2==0) return 0;
        }
        return 1;
    }
}

void Array::Find_MaxSNT()
{
    int M = arr[0];
    for(int i=0; i<Size; i++)
    {
        if(check_SNT(arr[i]) && arr[i]>M) M = arr[i];
    }
    cout << "Phan tu SNT lon nhat: " << M << endl;
}

bool Array::check_Ascending(bool ascending)
{
    for(int i=0; i<Size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            ascending = false;
            return 0;
        }
    }
    if(ascending) return 1;
}

void Array::Sort_Ascending()
{
    int m;
    for(int i=0; i<Size-1; i++)
    {
        m = i;
        for(int j=i+1; j<Size; j++)
        {
            if(arr[j] < arr[m]) m = j;
        }
        if(m != i) swap(arr[i],arr[m]);
    }
}

void Array::Sort_Descending()
{
    int M;
    for(int i=0; i<Size-1; i++)
    {
        M = i;
        for(int j=i+1; j<Size; j++)
        {
            if(arr[j] > arr[M]) M = j;
        }
        if(M != i) swap(arr[i],arr[M]);
    }
}
