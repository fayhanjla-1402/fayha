#include <iostream>
using namespace std;

int main(){
    int nums;
    cout << "Masukkkan jumlah bilangan bulat : ";
    cin >> nums;

    int input [nums];
    for (int i = 0; i < nums; i++){
        cin >> input[i];

    }
    
    int hasil[100];
    int idx = 0;

    for (int i = 0; i < nums; i++){
        if (input[i] % 2 == 0){
            hasil[idx++] = input[i];

        }

    }

    for (int i = 0; i < nums; i++){
        if (input[i] % 2 != 0){
            hasil[idx++] = input [i];

        }
    }

    for (int i = 0; i < nums; i++){
        cout << hasil[i] << " ";

    }

    return 0;
}