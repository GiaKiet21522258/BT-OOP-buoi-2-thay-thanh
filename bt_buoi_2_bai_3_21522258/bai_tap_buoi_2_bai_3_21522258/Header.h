#pragma once
#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<algorithm>
#include<stdio.h>
using namespace std;
typedef long long ll;

class NhanVien
{
private:
    char HoVaTen[20];
    int LuongCoBan;
    int Thuong;
    int ThucLanh;
public:
    char MaNhanVien[8];
    char PhongBan[10];
    void Nhap();
    void Xuat_thong_tin();
    int Xuat_luong_co_ban();
    int Xuat_thuong();
    int Xuat_thuc_lanh();
};
