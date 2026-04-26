#include "cDaThuc.h"
#include <iostream>
using namespace std;
int main(){
cDaThuc p1,p2;
p1.Nhap();
p2.Nhap();
p1.Xuat();
p2.Xuat();
float x; cin>>x;
cout <<   p1.tinhGiaTri(x) << endl;
    cout << p2.tinhGiaTri(x) << endl;

    cDaThuc tong = p1.Cong(p2);
    cout << "P1 + P2 = ";
    tong.xuat();

    cDaThuc hieu = p1.Tru(p2);
    cout << "P1 - P2 = ";
    hieu.xuat();

    return 0;
}
