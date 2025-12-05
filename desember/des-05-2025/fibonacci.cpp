/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Deret Fibonacci
Tanggal Buat: 5 Desember 2025
Deskripsi   : mengetahui deret fibonacci dengan rumus Fn = Fn−1 + Fn−2, deret fibonacci dimulai dari F0 = 0, F1 = 1.

*/

#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n == 0 || n == 1)
        return n;
    
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);

}
int main(){
    int n;
    cout << "Masukkan jumlah deret suku fibonacci : " ;
    cin >> n;

    cout << "Deret Fibonacci : ";
    for(int i = 0; i < n; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

