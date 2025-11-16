/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Inpu nilai
Tanggal Buat: 5 Oktober 2025 
*/
#include <iostream>
using namespace std;

void inputNilai(double nilai[], int jumlah){
    for(int i = 0; i < jumlah; i++){
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << " : " ;
        cin >> nilai[i];

    }
}

void tampilNilai(double nilai[], int jumlah){
    cout << "\nDaftar Nilai Mahasiswa :\n";
    for(int i = 0; i < jumlah; i++){ 
        cout << "Mahasiswa ke-" << i + 1 << " : " <<  nilai[i] << endl;

    }
}

double hitungRata(double nilai[], int jumlah){
    double total = 0;
    for(int i = 0; i < jumlah; i++){
        total += nilai[i];

    }
    return total / jumlah;

}

double cariMaks(double nilai[], int jumlah){
    double maks = nilai[0];
    for(int i = 0; i < jumlah; i++){
        if (nilai[i] > maks){
            maks = nilai[i];
        }
    }
    return maks;
}

double cariMin(double nilai[], int jumlah){
    double min = nilai[0];
    for(int i = 0; i < jumlah; i++){
        if(nilai[i] < min){
            min = nilai[i];
        }
    }
    return min;
}


int main(){
    int jumlah;
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlah;
    double nilai[jumlah];

    inputNilai(nilai, jumlah);
    tampilNilai(nilai, jumlah);

    double rata = hitungRata(nilai, jumlah);
    double maks = cariMaks(nilai, jumlah);
    double min = cariMin(nilai, jumlah);

    cout << "\nRata-rata nilai Mahasiswa adalah " << rata << endl << endl;
    cout << "Nilai Maksimum : " << maks << endl;
    cout << "Nilai Minimun : " << min << endl;

    int indexMaks = 0, indexMin = 0;
    for(int i = 0; i < jumlah; i++){
        if(nilai[i] == maks)
            indexMaks = i;
        if(nilai[i] == min)
            indexMin = i;
    }

    cout << "\nMahasiswa dengan nilai tertinggi adalah Mahasiswa ke-" << indexMaks + 1 << " : " << maks << endl;
    cout << "MAhasiswa debgan nilai terendah adalah Mahasiswa ke-" << indexMin + 1 << " : " << min << endl;

    return 0;




}