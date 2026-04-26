#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main() {
    cDaThuc p1, p2;

    cout << "Nhap da thuc P1:\n";
    p1.nhap();

    cout << "\nNhap da thuc P2:\n";
    p2.nhap();

    cout << "\nP1 = ";
    p1.xuat();

    cout << "P2 = ";
    p2.xuat();

    float x;
    cout << "\nNhap x: ";
    cin >> x;

    cout << "P1(" << x << ") = " << p1.tinhGiaTri(x) << endl;
    cout << "P2(" << x << ") = " << p2.tinhGiaTri(x) << endl;

    cDaThuc tong = p1.cong(p2);
    cout << "\nP1 + P2 = ";
    tong.xuat();

    cDaThuc hieu = p1.tru(p2);
    cout << "P1 - P2 = ";
    hieu.xuat();

    return 0;
}
