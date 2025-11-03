/*
Nama Program : Pointer dasar
Nama         : Fayha Najla Rahman
NPM          : 140810250011
Tanggal Buat : 03 November 2025
*/


#include <iostream>
using namespace std;

int main(){
    //dengan pointer
    string text1 = "Halo";
    string *text2 = &text1;

    text1 = "Selamat";
    cout << *text2 << endl;    // Output: Selamat

    //tanpa pointer
    string text3 = "Halo";
    string text4 = text3;

    text1 = "Selamat";
    cout << text4;    // Output: Halo


    return 0;
}
