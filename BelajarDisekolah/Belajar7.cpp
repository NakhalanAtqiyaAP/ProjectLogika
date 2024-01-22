#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;

    cout<<"Masukan Berapa yang mau di kalikan";
    cin>>x;

    for (int i = 1; i <= x; i++) {
        for (int a = 1; a <= 10; a++) {
            int hasil = i * a;
            cout << i << " x " << a << " = " << hasil << endl;
        }
    }

    return 0;
}
