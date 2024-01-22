#include <iostream>
#include <string>
using namespace std;

int main()
{
    int  beratBadan;
    int tinggiBadan;
    float Total = beratBadan % tinggiBadan;

    cout<<"berat badan:";
    cin>>beratBadan;
    cout<<"tinggi badan:";
    cin>>tinggiBadan;
    if(Total <= 18.5)
    {
        cout<<"Kurang";
    }else if(Total >= 18.5 && Total < 22.9)
    {
        cout<<"Normal";
    }else if(Total >= 22.9 && Total <= 24.9 )
    {
        cout<<"kelebihan";
    }else if(Total >= 25){
        cout<<"abnormal";
    }
}