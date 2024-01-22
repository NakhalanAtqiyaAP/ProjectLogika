#include <iostream>
#include <string>

using namespace std;

int waktuKerja()
{
    int waktuIstirahat= 30;
    int waktuShalat=20;

    int waktuKerja;
    
    cout<<"Masukan jam kerja: ";
    cin>>waktuKerja;
    if(waktuKerja <= 12)
    {
    int waktuJam= waktuKerja * 60;
    int hitung=waktuJam -waktuIstirahat -waktuShalat;
    int hitungMenit= waktuIstirahat - waktuShalat;
    int akumulasi= hitung / 60;
    cout<<"Total dari waktu kerja dengan dipotong dengan istirahat adalah:"<<akumulasi<<" Jam " <<hitungMenit<<" Menit"; 
    }else{
        cout<<"anda bukan budak perusahaan";
    }
   
    
    return 0;
}

int main()
{
waktuKerja();
}