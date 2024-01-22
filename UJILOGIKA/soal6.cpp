#include <iostream>
#include <string>
using namespace std;

int main() {
  
    int a = 25;
    int arr[a];
    int index = 0;
  
    for (int i = 1; i <= 25; ++i) {
        if (i % 4 == 0 && i % 5 == 0) {
            arr[index] = i;
            ++index;
        }
    }


   cout << "Nilai yang dapat dibagi oleh 4 dan 5 dalam rentang 1-25:\n";
    for (int i = 0; i < index; ++i) {
       cout << "Adalah" << ": " << arr[i] <<endl;
    }

    return 0;
}
