/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Membuat piramida
Tanggal Buat: 5 Oktober 2025 
*/

#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Masukkan tinggi : ";
    cin >> n;

    for (int i = 0; i < n; i++){ //tinggi
        for(int p = 0; p < n; p++){ // jumlah piramida
            for(int j = 0; j < 2 * n - 1; j++){ // kolom
                if(j >= n - 1 - i && j <= n - 1 + i){
                    cout << "*";

                }else{
                    cout << " ";

                }

            } cout << " ";

        } cout << endl;
    }
}