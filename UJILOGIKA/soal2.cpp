

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string x = "5";
  int y = 2;
  double a = 14.22;

if (typeid(x) == typeid(string)) {
cout << "x adalah string" << endl;
}else{ 
    cout<<"x bukan string"<<endl;
}

if (typeid(y) == typeid(int)) {
cout << "y adalah numerik" << endl;
}else{
    cout<<"y bukan numerik"<<endl;
}

if (typeid(a) == typeid(double)) {
cout << "a adalah numerik" << endl;
}else{
    cout<<"a bukan numerik"<<endl;
}
//typeid(variable) akan mengecek variable itu tipe datanya apa
}