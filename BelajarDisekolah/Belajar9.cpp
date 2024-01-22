#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int hitung()
{
    vector<int> bil1(5);  
    int angka = 1000;

    cout << "Masukan angka random: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> bil1[i];
    }
    // vector<int> kelompokPertama;
  

    unordered_set<int> setBil1(bil1.begin(), bil1.end());

    for (int nilai : bil1) {
        if (setBil1.find(nilai /= angka ) != setBil1.end()) {
           cout<<"bisa dibagi "<<nilai<<endl;
        } else {
           cout<<"tidak bisa dibagi "<<nilai<<endl;
        }
    }

    // cout << "Kelompok Pertama: ";
    // for (int nilai : kelompokPertama) {
    //     cout << nilai << " ";
    // }

    return 0;
}


int main() {
   hitung();
   return 0;
}
