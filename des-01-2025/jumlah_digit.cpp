/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Menghitung Jumlah Digit 
Tanggal Buat: 1 Desember 2025
*/

#include <iostream>
using namespace std;

int jumlahDigit(int n){
    if(n == 0)
        return 0;

    else
        return 1 + jumlahDigit (n/10);
}
int main(){
    int n;
    cout << "Masukkan digit : ";
    cin >> n;

    int hasil = jumlahDigit(n);
    cout << "Jumlah digit :" << hasil << endl;

    return 0;
}