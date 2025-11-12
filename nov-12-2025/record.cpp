/*
Nama Program : Revisi Suratku
Nama         : Fayha Najla Rahman
NPM          : 140810250011
Tanggal Buat : 12 November 2025
*/

#include <iostream>
using namespace std;

struct IsiSurat{
    string isi;
    string tempat;
    string tanggal;

};

struct DataSurat{
    string nmPenerima;
    string nmPengirim;
    string noPenerima;
    string noPengirim;
    string alamat;
    IsiSurat isiSurat;
};

void input(DataSurat &surat){
    getline (cin, surat.nmPenerima);
    getline (cin, surat.nmPengirim);
    getline (cin, surat.noPenerima);
    getline (cin, surat.noPengirim);
    getline (cin, surat.alamat);
    getline (cin, surat.isiSurat.isi);
    getline (cin, surat.isiSurat.tempat);
    getline (cin, surat.isiSurat.tanggal);
}

void output(DataSurat &surat){
    cout << surat.nmPenerima << endl;
    cout << surat.nmPengirim << endl;
    cout << surat.noPenerima << endl;
    cout << surat.noPengirim << endl;
    cout << surat.alamat << endl;
    cout << surat.isiSurat.isi << endl;
    cout << surat.isiSurat.tempat << endl;
    cout << surat.isiSurat.tanggal << endl;
}

int main(){
    DataSurat surat;

    input(surat);
    output(surat);

    return 0;
}