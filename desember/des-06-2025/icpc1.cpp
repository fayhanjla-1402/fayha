/*
Nama        : Fayha Najla Rahman
Nama Program: Menghitung Angka Genap
NPM         : 140810250011
Tanggal Buat: 06 Desember 2025
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan jumlah bilangan bulat: " ;
    cin >> n;
    int angka, count = 0;
    
    cout << "Masukkan bilangan bulat: ";
    for(int i = 0; i < n; i++){
        cin >> angka;
        if(angka % 2 == 0) 
        count++;
    }

    cout << count;
    return 0;

}