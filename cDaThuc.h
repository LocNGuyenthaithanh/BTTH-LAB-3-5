#ifndef CDATHUC_H
#define CDATHUC_H
class cDaThuc{
 private:
     int bac;
    float a[MAX];

 public:
    void Nhap();
    void Xuat();
    float TinhGiaTri(float x);
   cDaThuc Cong(const cDaThuc& dt);
    cDaThuc Tru(const cDaThuc& dt);


};
#endif // CDATHUC_H
