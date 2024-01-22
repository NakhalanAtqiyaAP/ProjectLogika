/*
1.Andi mendapatkan nilai mtk sebesar 83 apakah andi bisa dokanakan 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
int nilaiMtk;

cout<<"Masukan nilai:";
cin>>nilaiMtk;

if(nilaiMtk <= 78 && nilaiMtk >= 0){
    cout<<"Tidak kompotent";
}else if(nilaiMtk > 78 && nilaiMtk <= 100){
    cout<<"kompotent";
}else {
    cout<<"Nilai input salah";
}
}