/*
Nama Program: Merge Sort
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Tanggal Buat: 07 November 2025
*/

#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua subarray terurut menjadi satu
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // ukuran bagian kiri
    int n2 = right - mid;     // ukuran bagian kanan

    // Buat array sementara
    int L[n1], R[n2];

    // Salin data ke array sementara L[] dan R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Gabungkan kembali kedua array L[] dan R[] ke arr[]
    int i = 0;  // indeks untuk L[]
    int j = 0;  // indeks untuk R[]
    int k = left; // indeks untuk array utama arr[]

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Jika masih ada sisa elemen di L[], salin ke arr[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Jika masih ada sisa elemen di R[], salin ke arr[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi rekursif untuk membagi array menjadi bagian kecil
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // cari titik tengah

        // Bagi dua bagian, urutkan masing-masing
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan dua bagian yang sudah diurutkan
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}