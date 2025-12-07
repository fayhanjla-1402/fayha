/*
Nama        : Fayha Najla Rahman
Nama Program: Membalik String
NPM         : 140810250011
Tanggal Buat: 06 Desember 2025
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string kata;
    cout << "Masukkan kata yang ingin dibalik: ";
    cin >> kata;
    
    reverse(kata.begin(), kata.end());
    cout << "Setelah dibalik: " << kata;

    return 0;
}