#include <iostream>

using namespace std;

int hitungWaktu()
{
    string waktuSeb,waktuSet;

    int jamSeb = stoi(waktuSeb.substr(0,2));
    int menitSeb = stoi(waktuSeb.substr(2,2));

    int jamSet = stoi(waktuSet.substr(0,2));
    int menitSet = stoi(waktuSet.substr(2,2));

    int totalWaktuSeb = jamSeb * 60 + menitSeb;
    int totalWaktuSet = jamSet * 60 + menitSet;

    int totalSeluruhnya = totalWaktuSeb - totalWaktuSeb;

    int hitungJam = totalSeluruhnya / 60;
    int hitungMenit = totalSeluruhnya % 60;

    cout<<hitungJam<<" Jam "<<hitungMenit<<" menit ";
    return 0;
}


int main()
{
hitungWaktu();


}