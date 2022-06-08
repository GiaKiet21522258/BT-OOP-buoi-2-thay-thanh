#pragma once
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

class Date
{
private:
    int iDay;
    int iMonth;
    int iYear;
public:
    void Nhap_ngay();
    bool Kiem_tra_nam_nhuan();
    int Tim_so_ngay_trong_thang();
    void Xuat(Date A);
};
