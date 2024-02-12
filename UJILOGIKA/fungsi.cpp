// Belajar fungsi C++


#include <iostream>
#include <cmath>              // <cmath> buat ngitung matematika kaya tangen, const, akar kuadrat, dll
#include <cstdlib>            //menghasilkan fungsi random

using namespace std;

int main()
{
   //cmath
   int x = 10;
   int y = 2;
   sqrt(x);                //kuadrat
   tan(x);                 //tangen
   log(x);                 // logaritma dengan basis natural
   // fmod(x);                //modulus dalam float
   ceil(x);                //pembuatan ke atas
   exp(x);                 //eksponen
   cos(x);                 //cosinus
   fabs(x);                //nilai absolut dalam float
   floor(x);               //pembulatan ke bawah
   log10(x);               //logaritam berbasis 10
   pow(x,y);               //x pangkat y
   toupper(x);
   //cstdlib
   rand(x);                //menghasilkan output random
   return 0;
}

// return

int kuadrat(int x)
{
   int y = x * x;       //nilai outputnya akan masuk kereturn lalu dari return akan masuk ke fungsi dengan mengembalikan nilai ke fungsi kuadrat
    return y;
}