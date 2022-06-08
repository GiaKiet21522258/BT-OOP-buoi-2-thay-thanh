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

int tim_UCLN(int a, int b)
{
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    if (a == 0 || b == 0)
        return a + b;
    else
        while (a != b)
        {
            if (a > b)
                a -= b;
            else if (b > a)
                b -= a;
        }
    return a;
}

void Rut_gon_phan_so(int& a, int& b)
{
    int UCLN = tim_UCLN(a, b);
    cout << a / UCLN << "/" << b / UCLN << endl;
}

void CPhanSo::Xuat_phan_so(CPhanSo A, CPhanSo B)
{
    int k[9];
    k[1] = A.iTuSo * B.iMauSo + A.iMauSo * B.iTuSo;
    k[2] = A.iMauSo * B.iMauSo;
    k[3] = A.iTuSo * B.iMauSo - A.iMauSo * B.iTuSo;
    k[4] = A.iTuSo * B.iTuSo;
    k[5] = A.iTuSo * B.iMauSo;
    k[6] = A.iMauSo * B.iMauSo;
    k[7] = A.iMauSo * B.iMauSo;
    k[8] = A.iMauSo * B.iTuSo;
    cout << "Tong hai phan so la: ";
    Rut_gon_phan_so(k[1], k[2]);
    cout << "\nHieu hai phan so la: ";
    Rut_gon_phan_so(k[3], k[6]);
    cout << "\nTich hai phan so la: ";
    Rut_gon_phan_so(k[4], k[7]);
    cout << "\nThuong hai phan so la: ";
    Rut_gon_phan_so(k[5], k[8]);
}