#include <iostream>
#include <string>
using namespace std;

int nontonAnimeMovie()
{
    int jumlahNonton;
    int durasi[100];
    cout<<"Masukan berapa jumlah anime movie yang kamu nonton: ";
    cin>>jumlahNonton;
    cout<<"Masukan berapa lama durasi movie anime mu"<<endl;
    for(int i =1; i <= jumlahNonton; i++)
    {
        cout<<"Movie ke-"<<i + 1<<":";
        
       
    }
    return 0;
}
int nontonAnimeSeries()
{
    int jumlahNonton;
    string namaAnime;
    
    printf("Masukan Nama Anime: ");
    scanf("%s", &namaAnime);

    printf("Masukan Jumlah eps yang kamu nonton(Perhari): ");
    cin>>jumlahNonton;

    int totalNonton= jumlahNonton * 24;
    string hasil= (totalNonton <= 59)? "menit" : "jam";
    if(totalNonton == "jam")
    {
    cout<<"\n Total jam yang kamu lakukan untuk nonton"<<namaAnime<<" adalah "<<totalNonton<<" Menit";
    }else if(totalNonton == "menit")
    {
    //rumus menit ke jam
    cout<<"\n Total jam yang kamu lakukan untuk nonton"<<namaAnime<<" adalah "<<totalNonton<<" Menit";
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