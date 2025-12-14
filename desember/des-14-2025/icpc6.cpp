/*
Nama        : Fayha Najla Rahman
Nama Program: Bilangan Terbesar
NPM         : 140810250011
Tanggal Buat: 14 Desember 2025
*/

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Masukkan jumlah bilangan: ";
    cin >> N;

    int arr[N];
    cout << "Masukkan bilangan " << N << " : ";
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    } 

    int index = 0;
    cout << "Bilangan positif: ";
    for(int i = 0; i < N; i++){
        if(arr[i] > 0){
            cout << arr[i] << " ";
            index++;
        }
    }

    cout << "\nJumlah bilangan positif: " << index << endl;


    return 0;
}