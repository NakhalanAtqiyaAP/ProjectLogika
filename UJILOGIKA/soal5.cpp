#include <iostream>
#include <string>
using namespace std;

int main()
{
    int beli;


    cout<<"masukan harga: Rp.";
    cin>>beli;
    if(beli >= 100000){
    int harga_akhir= beli - (0.1*beli);
  cout<<"Anda mendapatkan diskon 7% ,bayar:"<<harga_akhir;
    }else{
        cout<<"bayar:"<<beli;
    }
}