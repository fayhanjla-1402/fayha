#include <iostream>
#include <fstream>   // untuk file handling
#include <iomanip>   // untuk format tampilan
using namespace std;

// 🔹 Record (Struct) untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    float nilai;
};

// 🔹 Fungsi untuk input data dan menulis ke file
void tulisData(Mahasiswa *mhs, int n) {
    ofstream file("data_mahasiswa.txt"); // buka file untuk menulis

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "Umur  : ";
        cin >> mhs[i].umur;
        cout << "Nilai : ";
        cin >> mhs[i].nilai;
        cout << endl;

        // Tulis ke file
        file << mhs[i].nama << "," << mhs[i].umur << "," << mhs[i].nilai << endl;
    }

    file.close();
    cout << "\nData berhasil disimpan ke file 'data_mahasiswa.txt'\n\n";
}

// 🔹 Fungsi untuk membaca data dari file
void bacaData() {
    ifstream file("data_mahasiswa.txt"); // buka file untuk dibaca
    string nama;
    int umur;
    float nilai;
    char koma;

    cout << "\n=== Data Mahasiswa dari File ===\n";
    cout << left << setw(20) << "Nama" << setw(10) << "Umur" << setw(10) << "Nilai" << endl;
    cout << "-------------------------------------------\n";

    float total = 0;
    int count = 0;

    while (file >> ws && getline(file, nama, ',')) {
        file >> umur >> koma >> nilai;
        cout << left << setw(20) << nama << setw(10) << umur << setw(10) << nilai << endl;
        total += nilai;
        count++;
    }

    if (count > 0)
        cout << "\nRata-rata nilai: " << total / count << endl;
    else
        cout << "File kosong atau tidak ditemukan.\n";

    file.close();
}

int main() {
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // 🔹 Alokasi array of struct menggunakan pointer
    Mahasiswa *ptr = new Mahasiswa[n];

    tulisData(ptr, n);  // input + tulis ke file
    bacaData();         // baca kembali dari file

    delete[] ptr;       // hapus memori dinamis
    return 0;
}
