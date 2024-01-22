#include <iostream>
#include <string>
#include <cmath> //liblary untuk matematika

using namespace std;

int main()
{
    int l;
    

    cout<<"Masukan luas persegi: ";
    cin>>l;

    //rumus
    // int sisi= 2 * l;
    int akar=sqrt(l); //mengakar kuadratkan
    cout<<"Maka panjang persegi adalah = "<< akar;
    return 0;
}