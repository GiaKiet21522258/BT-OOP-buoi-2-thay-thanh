#include "Header.h"
using namespace std;

bool Date::Kiem_tra_nam_nhuan()
{
    if (iYear % 4 == 0 && iYear % 100 != 0 || iYear % 400 == 0)
        return true;
    else return false;
}

int Date::Tim_so_ngay_trong_thang()
{
    int Ngay_trong_thang;
    switch (iMonth)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        Ngay_trong_thang = 31;
        break;
    case 4: case 6: case 9: case 11:
        Ngay_trong_thang = 30;
        break;
    case 2:
        if (Kiem_tra_nam_nhuan() == true)
            Ngay_trong_thang = 29;
        else
            Ngay_trong_thang = 28;
    }
    return Ngay_trong_thang;
}

void Date::Nhap_ngay()
{
    do
    {
        cout << "-Nhap nam: ";
        cin >> iYear;
    } while (iYear < 1900 || iYear > 10000);

    do
    {
        cout << "-Nhap thang: ";
        cin >> iMonth;
    } while (iMonth < 1 || iMonth > 12);

    do
    {
        cout << "-Nhap ngay: ";
        cin >> iDay;
    } while (iDay < 1 || iDay > Tim_so_ngay_trong_thang());
}

void Date::Xuat(Date A)
{
    if (A.iDay < Tim_so_ngay_trong_thang())
        A.iDay++;
    else if (A.iMonth < 12)
    {
        A.iDay = 1;
        A.iMonth++;
    }
    else
    {
        A.iDay = 1;
        A.iMonth = 1;
        A.iYear++;
    }
    cout << A.iDay << "/" << A.iMonth << "/" << A.iYear << endl;
}