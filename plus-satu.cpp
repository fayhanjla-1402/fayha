#include <iostream>
using namespace std;

int main(){
    int jmlDigit;
    cout << "Masukkan jumlah digit : ";
    cin >> jmlDigit;

    int digits[1000];
    for(int i = 0; i < jmlDigit; i++){
        cin >> digits[i];

    }

    int plus = 1;
    for(int i = jmlDigit - 1; i >= 0; i--){
        int sum = digits[i] + plus;
        digits[i] = sum % 10;
        plus = sum / 10; //supaya ga nambah lagi next loop

    } 

    cout << "Hasil setelah ditambah 1 : " ;


    // Kalau belakangnya 99 atau naik ke ratusan / ribuan, dll
    if(plus == 1){
        cout << "1 ";

    }

    for(int i = 0; i < jmlDigit; i++){
        cout << digits[i] << " ";

    }

    cout << endl;

    return 0;
}