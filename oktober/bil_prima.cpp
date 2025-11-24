/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Menentukan bilangan prima
Tanggal Buat: 1 Oktober 2025

*/
#include <iostream>
using namespace std;

bool prima(int n, int i = 2){
    if(n <= 2)
        return (n == 2);
    
    if(n % i == 0) // Jika habis dibagi i bukan prima
        return false;

    if(i * i > n)
        return true;

    return prima(n, i+1);
}
int main(){
    int angka;
    cout << "Masukkan angka: " ;
    cin >> angka;

    if (prima(angka)){
        cout << angka << " adalah bilangan prima." << endl;

    }else{
        cout << angka << " bukan bilangan prima." << endl;

    }
    return 0;
}