#include <iostream>

using namespace std;


int main()
{
int jam,menit, detik;
cout<<"Masukan detik : ";
cin>> detik;


jam = detik / (60*60);
menit = detik - ((60*60) * jam);
detik = detik - (60 *menit);

cout<<"---Hasil konversi---"<<endl;
cout<<"Jam : "<<jam<<endl;
cout<<"Menit : "<<menit<<endl;
cout<<"Detik : "<< detik<<endl;



}