#include <iostream>
#include <string>

using namespace std;

int hitungGaji() {
    const int golonganKaryawan[4] = {3000, 3500, 4000, 5000};
    int jam;
    string golongan;
    int gajiPerJam;

    cout << "Masukan jam bekerja: ";
    cin >> jam; 
    cout << "Masukan golongan karyawan (a, b, c, d): ";
    cin >> golongan;

    if (golongan == "a") {
        gajiPerJam = golonganKaryawan[0];
    } else if (golongan == "b") {
        gajiPerJam = golonganKaryawan[1];
    } else if (golongan == "c") {
        gajiPerJam = golonganKaryawan[2];
    } else if (golongan == "d") {
        gajiPerJam = golonganKaryawan[3];
    } else {
        cout << "Golongan '" << golongan << "' tidak dikenal." << endl;
        return 0;
    }

    int totalGaji;
    if (jam <= 40) {
        totalGaji = jam * gajiPerJam;
    } else {
        totalGaji = 40 * gajiPerJam + (jam - 40) * gajiPerJam * 1.5;
    }

    cout << "Jumlah gaji karyawan: " << totalGaji << endl;

    return totalGaji;
}

int main() {
    hitungGaji();
    return 0;
}
