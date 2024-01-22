#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string waktu;
// string menit;
void waktuUbah()
{
    int waktuUbah = stoi(waktu); //mengubah string to int
    string menitUbah = waktu.substr(waktu.length() - 2);

    string waktu = (waktuUbah >= 12) ? "pm" : "am";
    int jamSeluruhnya = (waktuUbah >12) ? waktuUbah - 12 : waktuUbah;

    string waktuSebagian = to_string(jamSeluruhnya);
    cout<<waktuSebagian<<"."<<menitUbah<<waktu;
    // cout<<waktuSebagian<<"."<< menit<<waktu;
    
}
int main()
{
cout<<"masukan waktu:";
cin>>waktu;
// cout<<"masukan menit:";
// cin>>menit;

cout<<"Waktu "<<waktu<< " diubah menjadi ";
waktuUbah();
}