#include "Header.h"
using namespace std;

void NhanVien::Nhap()
{
    cin.ignore();
    cout << "-Nhap ma nhan vien: ";
    fflush(stdin);
    cin.getline(MaNhanVien, 8);
    cout << "-Nhap ho va ten nhan vien: ";
    fflush(stdin);
    cin.getline(HoVaTen, 20);
    cout << "-Nhap phong ban nhan vien do dang cong tac: ";
    fflush(stdin);
    cin.getline(PhongBan, 10);
    cout << "-Luong co ban cua nhan vien do la: ";
    cin >> LuongCoBan;
    cout << "-So tien thuong cua nhan vien: ";
    cin >> Thuong;
    ThucLanh = LuongCoBan + Thuong;
    cout << "-Thuc lanh cua nhan vien: " << ThucLanh << endl;
}

void NhanVien::Xuat_thong_tin()
{
    cout << "-Ma cua nhan vien: " << MaNhanVien;
    cout << "\n-Ho va ten nhan vien: " << HoVaTen;
    cout << "\n-Phong ban nhan vien dang cong tac: " << PhongBan;
    cout << "\n-Tien luong cua nhan vien: " << LuongCoBan;
    cout << "\n-Tien thuong cua nhan vien: " << Thuong;
    cout << "\n-Thuc lang cua nhan vien: " << ThucLanh << endl;
}

int NhanVien::Xuat_luong_co_ban()
{
    return LuongCoBan;
}

int NhanVien::Xuat_thuong()
{
    return Thuong;
}

int NhanVien::Xuat_thuc_lanh()
{
    return ThucLanh;
}
