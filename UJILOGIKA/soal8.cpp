#include <iostream>
#include <string>
using namespace std;

int main()
{
int umur;
int nilaiMtk;
int nilaiIndo;
int nilaiIng;
float total = 0;
int jumlahNilai =nilaiIndo + nilaiIng + nilaiMtk;
float rataRata = total / jumlahNilai;

cout<<"Masukan umur:";
cin>>umur;
cout<<"nilai indo:";
cin>>nilaiIndo;
cout<<"nilai mtk:";
cin>>nilaiIndo;
cout<<"nilai ing:";
cin>>nilaiIndo;

if(umur >= 16 && umur <=25){
    if(nilaiIndo >= 86 && nilaiIng >= 85 && nilaiMtk >=87)
    {
     if(rataRata >= 85){
        cout<<"lulus";
     }
    }
}else{
    cout<<"tidak lulus";
}
}