#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> bil1(5);  
    vector<int> bil2(5);  

    cout << "Masukan Variable ke 1" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> bil1[i];
    }

    cout << "Masukan Variable ke 2" << endl;
    for (int a = 0; a < 5; a++) {
        cout << "Bilangan ke-" << a + 1 << ": ";
        cin >> bil2[a];
    }

    vector<int> kelompokPertama;
    vector<int> kelompokKedua;

    unordered_set<int> setBil1(bil1.begin(), bil1.end());

    for (int nilai : bil2) {
        if (setBil1.find(nilai) != setBil1.end()) {
            kelompokPertama.push_back(nilai);
        } else {
            kelompokKedua.push_back(nilai);
        }
    }

    cout << "Kelompok Pertama: ";
    for (int nilai : kelompokPertama) {
        cout << nilai << " ";
    }

    cout << "\nKelompok Kedua: ";
    for (int nilai : kelompokKedua) {
        cout << nilai << " ";
    }

    return 0;
}
