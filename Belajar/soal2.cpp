// Buatlah sebuah fungsi yang dapat menemukan angka terbesar dari sebuah array. 
// Contoh: Jika array yang diberikan adalah [1, 5, 3, 7, 2], maka hasilnya adalah 7.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int jumlah, min, max;
    int i= 0;

    int arr[jumlah];
    cout<<"--- Menentukan Bilangan  Minimal dan Maximal ---"<<endl;
    cout<<endl;
    
    cout<<"Masukan Jumlah Element :"<<endl;
    cin>>jumlah;
    cout<<"Masukan Nilai :"<<endl;
    for( i ; i < jumlah; i++)
    {
        cout<<"Bilangan Ke- "<< i + 1<<": ";
        cin>>arr[i];
    }
    for( i ; i< jumlah ; i++)
    {
        cout<<i+1<<arr[i]<<",";
    }

    if(i == 1)
    {
        min == arr[i];
        max == arr[i];
    }else if (min > arr[i])
    {
        min=arr[i];
    }
    else if(max < arr[i]) 
    {
        max =arr[i];
    }
    return 0;

    cout<<"Hasil Bilangan:"<<endl;
    cout<<"Bilangan Paling kecil"<<min<<endl;
    cout<<"Bilangan paling besar"<<max<<endl;
}