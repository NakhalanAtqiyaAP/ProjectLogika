#include <iostream>
#include <string>
using namespace std;

int main() {
    int bilangan = 90;
    int jumlah_kemungkinan = 0;

    for (int i = 3; i <= 30; i += 3) {
        if (bilangan % i == 0) {
            jumlah_kemungkinan++;
        }
    }
    cout << "Bilangan " << bilangan << " dapat dibagi dengan kemungkinan " << jumlah_kemungkinan << " kali." << endl;

    return 0;
}