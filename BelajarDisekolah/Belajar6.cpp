#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Barang // untuk mengelompokan beberapa tipe data menjadi satu
    {
        string nama;
        int harga;
    };


int main()
{
    vector<Barang>barang;   //menyimpan nilai sementara
    //menpush atau mengembalikan nilai ke array(fungsi array)
    barang.push_back({"ban",10});
    barang.push_back({"Oli mesin"});
    barang.push_back({"Kampas rem"});
    barang.push_back({"Busi",9});
    barang.push_back({"Akumulator",7});

    for (const auto &item : barang) {
        std::cout << "Nama: " << item.nama << ", Harga: " << item.harga <<endl;
    }
    /*
    const auto untuk
    */
    return 0;
}