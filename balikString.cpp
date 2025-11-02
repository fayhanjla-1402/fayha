/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Membalik String
Tanggal Buat: 1 Oktober 2025 
*/

#include <iostream>
using namespace std;



int main(){
    string input;
    cout << "Masukkan kata : ";
    getline(cin, input);

    int jmlHuruf = input.length(); // length untuk menghitung jumlah karakter

    for(int i = jmlHuruf - 1; i >= 0; i--){
        cout << input[i];

    }

    return 0;
}


