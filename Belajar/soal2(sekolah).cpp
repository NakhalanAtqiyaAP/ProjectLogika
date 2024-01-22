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

//tipe data yang bisa direturn int, float, double, char, maupun tipe data kompleks seperti array, struct, atau class.



#include <iostream>
#include <string>
using namespace std;
  string tipeMataLomba[3] = {"01W", "02A", "03G"};
    string tipeMataPerlombaan;
    string pendidikan;
    int tahunPerlombaan = 2024;
    string strTahun = to_string(tahunPerlombaan);
    string noTahunan = strTahun.substr(strTahun.length() - 2); //mengambil nilai dua data yang terakhir
    
    int jumlahPeserta;
    string nama;

 void pendidikanPeserta()
    {
    //operator perbandingan
    if (pendidikan == "smp")
    {
        cout << 'P';
    }
    else if (pendidikan == "sma" || pendidikan == "smk" || pendidikan == "ma")
    {
        cout << 'A';
    }
    }
    //operator perbandingan
    void tipePeserta() {
    if (tipeMataPerlombaan == "WebApp" || tipeMataPerlombaan == "webapp" || tipeMataPerlombaan == "Webapp")
    {
         cout<<tipeMataLomba[0];
    }
    else if (tipeMataPerlombaan == "Android" || tipeMataPerlombaan == "android")
    {
         cout<<tipeMataLomba[1];
    }
    else if (tipeMataPerlombaan == "Game" || tipeMataPerlombaan == "game")
    {
         cout<<tipeMataLomba[2];
    }
    else
    {
        cout << "tidak ada tipe mata perlomba"<<endl;
    }
    
}

int main()
{
    cout << "Masukan nama peserta:";
    cin >> nama;
    cout << "Masukan tingkat pendidikan:";
    cin >> pendidikan;
    cout << "Masukan tipe perlombaan:";
    cin >> tipeMataPerlombaan;
    cout << "Masukan urutan daftar peserta:";
    cin >> jumlahPeserta;


    cout << "no peserta " << nama << ":"   << jumlahPeserta ;
    tipePeserta();
    pendidikanPeserta();
    cout<<noTahunan;

    return 0;
}


