/*
Nama        : Fayha Najla Rahman
Nama Program: Menentukan Bilangan Ganjil atau Genap
NPM         : 140810250011
Tanggal Buat: 15 Desember 2025
*/

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Masukkan bilangan bulat: ";
    cin >> N;

    if(N%2 == 0){
        cout << N << " merupakan bilangan genap";
    }
    else{
        cout << N << " merupakan bilangan ganjil";
    }

    return 0;

}