#include <iostream>

using namespace std;

int main()
{
int jarak = 100;
double bahanBakar= 10 ;
double totalBahanBakar= bahanBakar;

for(int i = 0; i <= jarak; i++)
{   
        bahanBakar *= 0.8 ;   
        totalBahanBakar += bahanBakar;
}

cout<<"bahan bakar yang dihabiskan adalah "<<totalBahanBakar<< " KG";
return 0;


}