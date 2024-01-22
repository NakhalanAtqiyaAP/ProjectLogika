// Buatlah sebuah fungsi yang dapat menghitung
//  jumlah kata dalam sebuah kalimat. Contoh: 
//  Jika kalimat yang diberikan adalah “Halo, nama saya John Doe”,
// maka hasilnya adalah 5.

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string kalimat;
    int jumlahKata= 0;
    cout<<"----- Program Menghitung Jumlah Angka -----"<<endl;

    cout<<"Masukan Sebuah kalimat";
    getline(cin,kalimat);

    for(int i= 0; i < kalimat.length(); i++ ){
        if(kalimat[i] == ' '){
            jumlahKata++;
        }
    }
    jumlahKata++;
    cout<<"Jumlah kata ada:"<<jumlahKata<<endl;
    
    return 0;

}