/*
Nama        : Fayha Najla Rahman
Nama Program: Menjumlahkan Deret 1 sampai N
NPM         : 140810250011
Tanggal Buat: 06 Desember 2025
*/

#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Masukkan jumlah nilai n: ";
    cin >> n;

    long long hasil = n * (n + 1) / 2;
    cout << hasil;

    return 0;

}