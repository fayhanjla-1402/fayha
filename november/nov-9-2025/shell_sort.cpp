/*
Nama Program: Shell Sort
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Tanggal Buat: 09 November 2025
*/

#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    // Mulai dengan gap sebesar n/2, lalu kurangi menjadi gap/2 setiap iterasi
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Lakukan insertion sort pada setiap "subarray" yang terbentuk oleh gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];    // simpan elemen yang akan disisipkan
            int j = i;
            // Geser elemen arr[j-gap], arr[j-2*gap], ... yang lebih besar dari temp
            while (j >= gap && arr[j - gap] < temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            // Temp ditempatkan pada posisi yang tepat
            arr[j] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah bilangan yang dimasukkan: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // int arr[] = {23, 12, 1, 8, 34, 54, 2, 3};
    // int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sebelum: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    shellSort(arr, n);

    cout << "Sesudah: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
