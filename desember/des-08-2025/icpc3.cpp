/*
Nama        : Fayha Najla Rahman
Nama Program: Menentukan huruf vokal
NPM         : 140810250011
Tanggal Buat: 06 Desember 2025
*/

#include <iostream>
using namespace std;

int main(){
    char h;
    cout << "Masukkan sebuah huruf: ";
    cin >> h;

    cout << "Apakah huruf ini termasuk huruf vokal?? ";
    if(h == 'a'|| h == 'i'|| h == 'e'|| h == 'u'|| h == 'o'){
        cout << "YES";

    }else{
        cout << "NO";

    }

    return 0;
}