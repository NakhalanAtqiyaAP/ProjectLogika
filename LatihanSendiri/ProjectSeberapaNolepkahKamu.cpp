#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int nontonAnimeMovie()
{
    int jumlahNonton;
    string durasi[100];
    int jumlah;

    cout<<"Masukan berapa jumlah anime movie yang kamu nonton: ";
    cin>>jumlahNonton;
    cout<<"Masukan berapa lama durasi movie anime mu "<<endl;

    int waktuUbah= stoi(durasi[100]);
    string menitUbah= durasi[100].substr(waktuUbah.length() -1);

    for(int i =0; i < jumlahNonton; ++i)
    {
        cout<<"Movie ke-"<<i + 1<<":";
        cin>>durasi[i];
        
    }

     jumlah=0;
    for (int i=0;i<jumlahNonton;i++){
        jumlah=jumlah+waktuUbah;
    }
    cout<<"jumlah nonton seluruhnya: "<<jumlah<<","<<menitUbah;
    return 0;
}

int nontonAnimeSeries()
{
    string namaAnime;
    int jumlahNonton;

   cout << "Masukan Nama Anime: ";
cin >> namaAnime;

cout << "Masukan Durasi Episode anime (dalam menit): ";
int durasiEpisode;
cin >> durasiEpisode;

cout << "Masukan Jumlah eps yang kamu nonton (Perhari): ";
cin >> jumlahNonton;

int totalNonton = jumlahNonton * durasiEpisode;
int jam = totalNonton / 60;
int menit = totalNonton % 60; 
if (totalNonton >= 288 && totalNonton < 384)
{
    cout<<"Anda Nolep \n";
}else if(totalNonton >= 384)
{
    cout<<"Anda nolep dan beban keluarga, mending mati aja \n";
}else
{
    cout<<"Selamat Anda Bukan nolep \n";
}

if (totalNonton <= 59) {
    cout <<"Total nonton " << namaAnime << " adalah " << totalNonton << " Menit";
} else {
    cout <<"Total nonton " << namaAnime << " adalah " << jam << "," << menit << " Jam";
}
   
    return 0;
}

int main()
{
    string jenisAnime;
    int jumlah;

    cout<<"----- Selamat Datang Di Project Mempertanyakan Kenolepan mu ------"<<endl;
    cout<<"Masukan Jenis anime (series/movie):";
    cin>>jenisAnime;
    if(jenisAnime == "movie")
    {
        nontonAnimeMovie();
    }else if(jenisAnime == "series")
    {
        nontonAnimeSeries();
    }else{
        cout<<"ga ada jenis anime "<< jenisAnime;
    }
}