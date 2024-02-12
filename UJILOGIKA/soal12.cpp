#include <iostream>

using namespace std;

int main()
{
int penumpang;
int bus =0;


cout<<"Masukan penumpang :";
cin>>penumpang;

if(penumpang % 7)
{
    bus++;
}

cout<<" Jumlah penumpang "<<penumpang<<" jumlah bus "<<bus;
}