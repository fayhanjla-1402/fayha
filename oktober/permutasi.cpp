/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Permutasi
Tanggal Buat: 1 Oktober 2025
Deskripsi   : menggunakan rumus permutasi P(n,r) = n!/(n−r)!
*/

#include <iostream>
using namespace std;

int faktorial(int n){
    if(n == 0 || n == 1)
        return 1;
    
    else 
        return n * faktorial(n - 1);
}
int permutasi(int n, int r){
    return faktorial(n) / faktorial(n - r);

}

int main(){
    int n, r;
    cout << "Masukkan nilai n = " ;
    cin >> n;
    cout << "Masukkan nilai r = " ;
    cin >> r;

    if (r > n){
        cout << "Nilai r tidak boleh lebih kecil dari n." << endl;

    }else {
        int hasil = permutasi(n, r);
        cout << "Permutasi P(" << n << ", " << r << ") = " << hasil << endl;

    }
    return 0;
}