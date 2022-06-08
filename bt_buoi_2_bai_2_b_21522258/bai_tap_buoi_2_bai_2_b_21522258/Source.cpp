#include "Header.h"
using namespace std;

void Diem::Nhap_du_lieu()
{
    cout << "Ho va ten hoc sinh: ";
    fflush(stdin);
    getline(cin, sTen);

    do
    {
        cout << "nhap diem toan: ";
        cin >> dToan;
    } while (dToan < 0 || dToan > 10);

    do
    {
        cout << "nhap diem van: ";
        cin >> dVan;
    } while (dVan < 0 || dVan > 10);

}

void Diem::Xuat_du_lieu(Diem A)
{
    double dDiemTB = 0.0;
    dDiemTB = 1.0 * (dToan + dVan);
    cout << "Diem trung binh cua hoc sinh la: " << dDiemTB / 2 << endl;
}
