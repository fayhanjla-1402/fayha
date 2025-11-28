#include <iostream> 
#include <string>
using namespace std;

//fungsi
int tambah(int a, int b){
    int hasil = a + b;
    return hasil;
}

//fungsi rekursif
int faktorial(int n){
    if(n == 0) return 1;
    return n * faktorial(n-1); //pemanggilan fungsi rekursif
}

int main(){
    // Tipe, Variabel dan Operator
    int angka1 = 10;
    int angka2 = 5;
    int hasil = tambah(angka1, angka2);

    cout << "Hasil penjumlahan: " << hasil << endl;

    // Struktur kontrol pencabangan
    if(hasil > 10){
        cout << "Hasil lebih dari 10" << endl;

    } else {
        cout << "Hasil kurang dari 10" << endl;
    }

    // String
    string nama;
    getline(cin, nama);
    cout << "Nama: " << nama << endl;

    //Array
    int arr[5] = {10,20,30,40,50};
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    } cout << endl;

    // Pemanggilan fungsi rekursif
    int hasilFaktorial = faktorial(5);
    cout << "Hasil faktorial dari 5: " << hasilFaktorial << endl;

    return 0;
}


