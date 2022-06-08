#include "Header.h"
using namespace std;

int main()
{
    CPhanSo A;
    CPhanSo B;
    cout << "nhap phan so thu nhat: \n";
    A.Nhap_phan_so();
    cout << "nhap phan so thu hai: \n";
    B.Nhap_phan_so();
    cout << "Phan so lon hon la: ";
    A.Xuat_phan_so(A, B);
    return 0;
}