#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {75, 77, 78, 87, 90, 69, 68, 66, 77, 72};
    vector<int> kelompok1;
    vector<int> kelompok2;

    for (int nilai : kelompok1)
    {
        if (nilai >= 75)
        {
            kelompok1.push_back(nilai);
    
        }
        else
        {
            kelompok2.push_back(nilai);
          
        }
    }
    
        sort(kelompok1.begin(), kelompok1.end(), greater<int>());

    cout << "Nilai tak kompeten yang diurutkan: ";
    for (int nilai : kelompok1)
    {
        cout << nilai << " ";
    }


    cout << endl;


    sort(kelompok2.begin(), kelompok2.end(), greater<int>());

    cout << "Nilai tak kompeten yang diurutkan: ";
    for (int nilai : kelompok2)
    {
        cout << nilai << " ";
    }

    cout << endl;

    return 0;
}
