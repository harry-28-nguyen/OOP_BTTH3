#ifndef ARRAY_H
#define ARRAY_H


class Array
{
    public:
        Array();
        Array(int n);
        ~Array();
        void Input();
        void Output();
        int Count(int val);
        int Find(int value) const;
        bool check_Ascending(bool ascending);
        bool check_SNT(int n);
        void Find_minOdd();
        void Find_MaxSNT();
        void Sort_Ascending();
        void Sort_Descending();

    private:
        int *arr; // con trỏ quản lý của mảng.
        int Size; // số lương phần tử trong mảng.
        int capacity; // dung lượng của mảng.
};

#endif // ARRAY_H
