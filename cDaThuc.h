#ifndef CDATHUC_H
#define CDATHUC_H

#include <vector>

class cDaThuc {
private:
    int bac;
    vector<float> a;

public:
    cDaThuc();
    cDaThuc(int n);

    void nhap();
    void xuat();

    float tinhGiaTri(float x);

    cDaThuc cong(const cDaThuc& dt);
    cDaThuc tru(const cDaThuc& dt);
};

#endif
