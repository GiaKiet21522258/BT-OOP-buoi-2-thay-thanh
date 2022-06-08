#include "Header.h"
using namespace std;

void sap_xep(NhanVien NV[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(NV[i].PhongBan, NV[j].PhongBan) == 0)
            {
                if (strcmp(NV[i].MaNhanVien, NV[j].MaNhanVien) < 0)
                {
                    NhanVien c = NV[i];
                    NV[i] = NV[j];
                    NV[j] = c;
                }
            }
            else if (strcmp(NV[i].PhongBan, NV[j].PhongBan) != 0)
            {
                if (strcmp(NV[i].PhongBan, NV[j].PhongBan) > 0)
                {
                    NhanVien d = NV[i];
                    NV[i] = NV[j];
                    NV[j] = d;
                }
            }
        }
    }
}


int main()
{
    NhanVien NV[100];
    int soNV;
    cout << "So luong nhan vien: ";
    cin >> soNV;
    long Tong = 0;
    for (int i = 0; i < soNV; i++)
    {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << " : \n";
        NV[i].Nhap();
    }

    cout << "\na/ ";
    for (int i = 0; i < soNV; i++)
    {
        Tong += NV[i].Xuat_thuc_lanh();
    }
    cout << "Tong thuc lanh cua thang cua tat ca cac nhan vien trong cong ty: " << Tong << endl;

    cout << "\nb/ Nhung nhan vien co luong co ban thap nhat: \n";
    int min = NV[0].Xuat_luong_co_ban();
    for (int i = 0; i < soNV; i++)
    {
        if (NV[i].Xuat_luong_co_ban() < min)
            min = NV[i].Xuat_luong_co_ban();
    }
    for (int i = 0; i < soNV; i++)
    {
        if (NV[i].Xuat_luong_co_ban() == min)
        {
            NV[i].Xuat_thong_tin();
        }
        cout << "\n";
    }

    cout << "\nc/ So luong nhan vien co muc thuong >= 1200000: ";
    int dem = 0;
    for (int i = 0; i < soNV; i++)
    {
        if (NV[i].Xuat_thuong() >= 1200000)
            dem++;
    }
    cout << dem << endl;

    cout << "\nd/ Sau khi sap xep: ";
    cout << "\n==DANH SACH NHAN VIEN==\n";
    sap_xep(NV, soNV);
    for (int i = 0; i < soNV; i++)
    {
        cout << "Nhan vien thu " << i + 1 << " : \n";
        NV[i].Xuat_thong_tin();
        cout << endl;
    }
    return 0;
}
