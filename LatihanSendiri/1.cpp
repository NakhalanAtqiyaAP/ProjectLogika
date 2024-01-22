#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ulang= 'y';
    int counter =0;

    while(ulang == 'y')
    {
        printf("Apakaha mau mengulanginya lagi\n");
        printf("Ketik (y/t) : ");
        cin>>ulang;

        counter++;
    }
    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);

    return 0;  
}