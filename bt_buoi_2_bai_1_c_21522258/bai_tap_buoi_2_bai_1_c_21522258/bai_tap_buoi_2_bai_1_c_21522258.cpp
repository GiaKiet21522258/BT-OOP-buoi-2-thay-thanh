#include "Header.h"
using namespace std;

int main()
{
    CPhanSo A;
    CPhanSo B;
    cout << "Nhap phan so thu nhat: \n";
    A.Nhap_phan_so();
    cout << "Nhap phan so thu hai: \n";
    B.Nhap_phan_so();
    A.Xuat_phan_so(A, B);
}