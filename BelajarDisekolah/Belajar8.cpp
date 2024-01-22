#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Siswa // untuk mengelompokan beberapa tipe data menjadi satu
    {
        string nama;
        int harga;
    };


int main()
{
    vector<Siswa>siswa;   //menyimpan nilai sementara
    //menpush atau mengembalikan nilai ke array(fungsi array)
    siswa.push_back({"Andi",80+78+82+78+88});
    siswa.push_back({"Dudan",86+70+80+85+85+81});
    siswa.push_back({"Abdul",83+91+70+73+81});
    siswa.push_back({"Riki",89+85+84+86+85});
    siswa.push_back({"Aji",75+67+90+58+67});

    
    for (const auto &item : siswa) {
        std::cout << "Nama: " << item.nama << ", Nilai Keseluruhan: " << item.harga <<endl;
    }
    /*
    const auto untuk
    */
    return 0;
}