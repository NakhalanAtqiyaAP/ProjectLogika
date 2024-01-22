/*
diberikan dua kondisi saat pukul 07.00 sampai 11.30 merupakan "waktu kerja" 
dan saat pukul 11.30 sampai 12.15 merupakan "waktu istirahat" dan saat pukul 12.15 
sampai 16.00 merupakan "waktu kerja" sementara saat pukul 16.00 sampai 07.00 merupakan 
"bukan waktu kerja". apabila sekarang pukul 16.00 maka sekarang merupakan waktu (syarat: variabel,
jam, dan menit dipisahkan, diketahui,
 variabel, jam = 16, dan menit = 0 atau diketahui jam = 15 dan menit = 40 (hasilnya "waktu kerja"))
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int jam ,menit;
    cout<<"masukan jam: ";
    cin>>jam;
    cout<<"masukan menit: ";
    cin>>menit;
    
    
    if(jam >= 0 && jam <= 24 && menit >= 0 && menit <= 59)
    {
        if((jam >= 7 && menit >= 0)||(jam <= 11 && menit <= 30 ))
        {
            cout<<"jam kerja";
        }else if((jam >= 11 && menit>= 0) ||( jam <= 12 && menit <= 15))
        {
            cout<<"Jam istirahat";
        }else if((jam >= 12 && menit >= 0) ||( jam <= 16 && menit == 0))
        {
            cout<<"Jam kerja";
        }else
        {
            cout<<"Bukan waktu kerja";
        }
    }else{
        cout<<"inputan salah";
    }
    return 0;
}