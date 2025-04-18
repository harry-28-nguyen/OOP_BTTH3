#ifndef LISTCANDIDATE_H
#define LISTCANDIDATE_H

#include <Candidate .h>
#include <vector>


class ListCandidate : public Candidate
{
private:
    int n; // so luong hoc sinh
    std::vector<Candidate> hocsinh;
    int lc;
public:
    ListCandidate(): n(0), lc(0){}
    void Nhap();
    void Xuat();
    void TongDiem_greaterthan5();
    void MaxTongDiem();
    void Sort();
    void menu();
};

#endif // LISTCANDIDATE_H
