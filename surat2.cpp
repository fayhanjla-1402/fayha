#include <iostream>
using namespace std;

struct Pengirim{
    string pengirim;
    string isiSurat;
    string tanggal;
    string noTelp;
};

struct Penerima{
    string penerima;
    string alamat;
    string tempat;
};

struct DataSurat{
    
}

void input(DataSurat &nama, Surat &isi){
    cin >> nama.penerima;
    cin >> nama.pengirim;
    cin >> nama.noTelp;
    getline(cin, isi.alamat);
    getline(cin, isi.isiSurat);
    getline(cin, isi.tempat);
    getline(cin, isi.tanggal);

}

void output(DataSurat &nama, Surat &isi){
    cout << "Nama Penerima Surat : " << nama.penerima << endl;
    cout << "Nama Pengirim Surat : " << 
}