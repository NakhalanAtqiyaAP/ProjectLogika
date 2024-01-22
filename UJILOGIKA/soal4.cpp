#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int nilai;

    cout<<"masukan nilai:";
    cin>>nilai;

    if(nilai >= 90 && nilai <= 100){
        cout<<"a";
    }else if( nilai >= 75 && nilai < 90){
        cout<<"b";
    }else if(nilai < 75 && nilai >= 0){
        cout<<"c";
    }else{
        cout<<"Nilai yang di inputkan salah";
    }
}