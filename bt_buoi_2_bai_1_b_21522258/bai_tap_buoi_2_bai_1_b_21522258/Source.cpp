#include "Header.h"
using namespace std;

void CPhanSo::Nhap_phan_so()
{
    do
    {
        cout << "-Nhap tu so: ";
        cin >> iTuSo;
    } while (iTuSo < 1);

    do
    {
        cout << "-Nhap mau so: ";
        cin >> iMauSo;
    } while (iMauSo < 1);

}

void CPhanSo::Xuat_phan_so(CPhanSo A, CPhanSo B)
{
    CPhanSo C;
    if (A.iTuSo * B.iMauSo == A.iMauSo * B.iTuSo)
        C = A;
    else if (A.iTuSo * B.iMauSo > A.iMauSo * B.iTuSo)
        C = A;
    else if (A.iTuSo * B.iMauSo < A.iMauSo * B.iTuSo)
        C = B;
    cout << C.iTuSo << "/" << C.iMauSo << endl;
}