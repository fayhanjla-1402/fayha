/*
Nama        : Fayha Najla Rahman
Nama Program: Bilangan Terbesar
NPM         : 140810250011
Tanggal Buat: 06 Desember 2025
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan jumlah bilangan bulat: ";
    cin >> n;

    int angka[n];
    int maks = 0;
    for(int i = 0; i < n; i++){
        cin >> angka[i];

    }

    for(int i = 0; i < n-1; i++){
        if(angka[i] > maks){
            maks = angka[i];
        }
        
    }
    cout << "Nilai maksimal: " << maks;

    return 0;

}