//Usia Andi saat imi adalah 16 trum sebelum usia beni, antartahun, sedangkan usia Beni 3 tahun lebih tua dibandingkan Dani yang tahun kelahairannya sama dengan andi, 
//lalu eko adalah 1 lusa andi dan eko siapakah yang lahir ditahun 4 tahun sekali.Tampilkan tahun tahun kelahiran oang-orang

/*Tahun ini SMK Wikrama menjadi tuan rumah di lomba programming nasional diikuti oleh siswa smp dan sma/smk/ma.
setiap peserta yang mendaftarkan mendapatkan no peserta sesuai dengan ketentuan dan ategori mata lomba. terdapat 3 mata
lomba dengan kodenya masing-masing, yaitu;
web app 01W
Android 02A
Game    03G

No peserta disusun dari 'urutan daftar ke - kategori mata lomba - tingkat pendidikan P untuk SMP, A untuk SMK
/SMA/MA -2 digit terakhir ditahun pelaksanaan

Jika terdapat 121 peserta yang sudah daftar dan tuan rumah menunjuk eko sebagai perwakilan lomba web berapakah no eko

 */

/*
Dani ingin membangun rumah disuatu komplek perumahan dengan panjang tanah 13 m dan lebar tanah 9 m. tetapi sebelum membangun rumah, dani harus
memberikan laporan tipe rumag ang dia buat 
Tipe 35: <90 m2
tipe 45 : 90 -96 m2
tipe 54 : 96 - 120 m2
tipe 60 : 120 - 150 m2
tipe 80 : >150m2
*/


//1
#include <iostream>
#include <string>
using namespace std;

//operator perbandingan
bool tahunKabisat(int tahun) {
    return (tahun % 4 == 0) && (tahun % 100 != 0) || (tahun % 400 == 0);
    /*
    Jika tahunnya habis dbagi 4 maka hasilnya true
    jika habis dibagi 100 maka hasilnya false
    Jika habis dibagi 400 maka hasilnya true
    */
}

int main() {
    int tahunSekarang = 2024;
    int usiaAndi;

    cout << "Masukkan usia Andi: ";
    cin >> usiaAndi;

    int tahunLahirAndi = tahunSekarang - usiaAndi;
    int usiaDudan = usiaAndi;
    int tahunLahirDudan = tahunSekarang - usiaDudan;
    int usiaDani = usiaDudan + 3;
    int tahunLahirDani = tahunSekarang - usiaDani;
    int usiaEko = usiaDani - 5;
    int tahunLahirEko = tahunSekarang - usiaEko;

    //operator kondisional (Ternary)
    string andiLahirTahunKabiset = tahunKabisat(tahunLahirAndi) ? "Ya" : "tidak"; 
    string ekoLahirTahunKabiset = tahunKabisat(tahunLahirEko) ? "Ya" : "tidak";

    cout << "Umur Andi adalah: " << usiaAndi << " tahun, kelahirannya: " << tahunLahirAndi << endl;
    cout << "Umur Dudan adalah: " << usiaDudan << " tahun, kelahirannya: " << tahunLahirDudan << endl;
    cout << "Umur Dani adalah: " << usiaDani << " tahun, kelahirannya: " << tahunLahirDani << endl;
    cout << "Umur Eko adalah: " << usiaEko << " tahun, kelahirannya: " << tahunLahirEko << endl;

    //operator perbandingan
    if (andiLahirTahunKabiset == "Ya") {
        cout << "Andi lahir tahun kabisat" << endl;
    } else {
        cout << "Andi Bukan kelahiran kabisat" << endl;
    }

    if (ekoLahirTahunKabiset == "Ya") {
        cout << "Eko lahir tahun kabisat" << endl;
    } else {
        cout << "Eko Bukan Kelahiran Kabiser" << endl;
    }

    return 0;
}
