#include "cDaThuc.h"
#include <iostream>
#include <cmath>
using namespace std;
void cDaThuc::Nhap(){
 cin>>bac;
 for(int i=bac; i>=0; i--){
   cout<<"He so:";
    cin>>a[i];

 }

}
void cDaThuc::Xuat(){
    for(int i=bac;i>=0;i--){
      if(a[i]!=0){
        if(i!=bac&&a[i]>0) cout<<"+";
         if(a[i]<0) cout<<"-";
         cout<<abs(a[i]);
         if(i>0) cout<<"x^"<<i;
      }
    }
    cout<<endl;
}
float cDaThuc::TinhGiaTri(float x){
  float kq=0;
  for (int i=0; i<=bac; i++){
    kq+=a[i]*pow(x,i);
  }
  return kq;
}
cDaThuc cDaThuc::Cong(const cDaThuc& dt){
int maxbac= max(bac,dt.bac);
cDaThuc kq;
kq.bac=maxbac;
for(int i=0;i<=maxbac;i++){
    float h1=(i<=bac)?a[i]:0;
    float h2=(i<=dt.bac)?dt.a[i]:0;
    kq.a[i]=h1+h2;

}
return kq;
}
cDaThuc cDaThuc::Tru(const cDaThuc& dt){
int maxbac= max(bac,dt.bac);
cDaThuc kq;
kq.bac=maxbac;
for(int i=0;i<=maxbac;i++){
    float h1=(i<=bac)?a[i]:0;
    float h2=(i<=dt.bac)?dt.a[i]:0;
    kq.a[i]=h1-h2;

}
return kq;

}
