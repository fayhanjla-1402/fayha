/*
Nama Program: Biaya Parkir
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Tanggal Buat: 23 November 2025
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Waktu{
    int jam, menit, detik;
};

// Mengubah ke detik
int kedetik(Waktu w){
    return w.jam*3600 + w.menit*60 + w.detik;
}

// Mengubah detik ke format waktu
Waktu keWaktu(int totalDetik){
    Waktu w;
    w.jam = totalDetik/3600;
    totalDetik %= 3600;
    w.menit = totalDetik/60;
    w.detik = totalDetik %60;
    return w;
}

int main(){
    Waktu datang, pulang, lama;
    string jenis;
    int biaya = 0;

    cout<< "Jam Datang (jam menit detik): ";
    cin >> datang.jam >> datang.menit >> datang.detik;

    cout<< "Jam Pulang (jam menit detik): ";
    cin >> pulang.jam >> pulang.menit >> pulang.detik;

    int selisih = kedetik(pulang) - kedetik(datang);
    lama = keWaktu(selisih);

    cout << "Lama Parkir = " << lama.jam << " : " << lama.menit << " : " << lama.detik << endl;

    cout << "Jenis Kendaraan (Mobil/ Motor): ";
    cin >> jenis;

    // Hitung jam parkir (dengan pembulatan keatas)
    int totalJam = ceil(selisih / 3600.0);

    if(jenis == "Mobil" || jenis == "mobil"){
        biaya = 3000;
        if(totalJam > 1) biaya += (totalJam - 1) * 3000;

    }else {
        biaya = 2000;
        if(totalJam > 1) biaya += (totalJam - 1) * 2000;
    }

    cout << "Bayar = Rp." << biaya << endl;

    return 0;
}