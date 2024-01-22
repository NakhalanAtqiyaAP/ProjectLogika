#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cout<<"Masukan nilai a: ";
    cin>>a;
    for(int n = 0; n<12;n++)
    {   
        int suku= a * 4 + (n+1) * 3;
        cout<<"Suku ke-"<<n +1<<"="<<suku<<endl;
        
    }

}