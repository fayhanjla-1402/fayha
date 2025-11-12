/*
Nama Program : Pointer
Nama         : Fayha Najla Rahman
NPM          : 140810250011
Tanggal Buat : 12 November 2025
*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Masukkan dua bilangan acak: ";
    cin >> a >> b;

    int *ptr1;
    ptr1 = &a;

    int *ptr2;
    ptr2 = &b;

    if(a < b){
        // tukar a dengan b
        a = a+b;
        b = a-b;
        a -= b;
    }

    cout << *ptr1 << " " << *ptr2;
}