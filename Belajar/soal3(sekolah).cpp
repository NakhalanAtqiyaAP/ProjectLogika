/*
Dani ingin membangun rumah disuatu komplek perumahan dengan panjang tanah 13 m dan lebar tanah 9 m. tetapi sebelum membangun rumah, dani harus
memberikan laporan tipe rumag ang dia buat 
Tipe 35: <90 m2
tipe 45 : 90 -96 m2
tipe 54 : 96 - 120 m2
tipe 60 : 120 - 150 m2
tipe 80 : >150m2
*/

#include <iostream>
#include <string> 
using namespace std;

int main() {
    int panjangTanah = 13;
    int lebarTanah = 9;

    int luasTanah = panjangTanah * lebarTanah;


    string tipeRumah;
    //operator perbandingan
    if (luasTanah < 90) {
        tipeRumah = "Tipe 35";
    } else if (luasTanah >= 90 && luasTanah <= 96) {
        tipeRumah = "Tipe 45";
    } else if (luasTanah > 96 && luasTanah <= 120) {
        tipeRumah = "Tipe 54";
    } else if (luasTanah > 120 && luasTanah <= 150) {
        tipeRumah = "Tipe 60";
    } else {
        tipeRumah = "Tipe 80";
    }


    cout << "Luas Tanah: " << luasTanah << " m2" << endl;
    cout << "Tipe Rumah: " << tipeRumah << endl;

    return 0;
}
