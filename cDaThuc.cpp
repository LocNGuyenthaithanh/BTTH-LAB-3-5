#include <iostream>
#include <cmath>
#include "cDaThuc.h"
using namespace std;

// Constructor mặc định
cDaThuc::cDaThuc() {
    bac = 0;
    a.resize(1, 0);
}

// Constructor có tham số
cDaThuc::cDaThuc(int n) {
    bac = n;
    a.resize(n + 1);
}

// Nhập
void cDaThuc::nhap() {
    cout << "Nhap bac da thuc: ";
    cin >> bac;
    a.resize(bac + 1);

    for (int i = bac; i >= 0; i--) {
        cout << "Nhap he so x^" << i << ": ";
        cin >> a[i];
    }
}

// Xuất
void cDaThuc::xuat() {
    for (int i = bac; i >= 0; i--) {
        if (a[i] != 0) {
            if (i != bac && a[i] > 0) cout << " + ";
            if (a[i] < 0) cout << " - ";

            cout << abs(a[i]);
            if (i > 0) cout << "x^" << i;
        }
    }
    cout << endl;
}

// Tính giá trị
float cDaThuc::tinhGiaTri(float x) {
    float kq = 0;
    for (int i = 0; i <= bac; i++) {
        kq += a[i] * pow(x, i);
    }
    return kq;
}

// Cộng
cDaThuc cDaThuc::cong(const cDaThuc& dt) {
    int maxBac = max(bac, dt.bac);
    cDaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        float hs1 = (i <= bac) ? a[i] : 0;
        float hs2 = (i <= dt.bac) ? dt.a[i] : 0;
        kq.a[i] = hs1 + hs2;
    }

    return kq;
}

// Trừ
cDaThuc cDaThuc::tru(const cDaThuc& dt) {
    int maxBac = max(bac, dt.bac);
    cDaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        float hs1 = (i <= bac) ? a[i] : 0;
        float hs2 = (i <= dt.bac) ? dt.a[i] : 0;
        kq.a[i] = hs1 - hs2;
    }

    return kq;
}
