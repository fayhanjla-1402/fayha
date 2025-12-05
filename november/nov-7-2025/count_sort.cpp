/*
Nama Program: Counting Sort
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Tanggal Buat: 07 November 2025
*/

#include <iostream>
using namespace std;

void countingSortAscending(int arr[], int n) {
    // Cari nilai maksimum
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // Buat array count dengan ukuran max+1 dan isi 0
    int count[max + 1] = {0};

    // Hitung frekuensi setiap elemen
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // Gabungkan kembali ke array asli (urutan naik)
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    countingSortAscending(arr, n);

    cout << "Sesudah diurutkan (ascending): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
