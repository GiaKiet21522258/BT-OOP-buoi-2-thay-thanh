#pragma once
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

class Diem
{
private:
    string sTen;
    double dToan;
    double dVan;
public:
    void Nhap_du_lieu();
    void Xuat_du_lieu(Diem A);
};