#include <iostream>
using namespace std;

int main(){
   int jml;
   cout << "Masukkan jumlah bilangan yang dimasukkan : ";
   cin >> jml;

   int nums[1000];
   for (int i = 0; i < jml; i++){
    cin >> nums[i];

   }

   long long operasi = 0;

   for (int i = 1; i < jml; i++){
    if (nums[i] <= nums [i - 1]){
        // hitung berapa kali harus ditambah
        int tambah = (nums[i - 1] + 1) - nums [i];
        operasi += tambah;
        nums[i] = nums[i - 1] + 1;

    }
   }

   cout << "Jumlah minimum operasi: " << operasi << endl;

   cout << "Array setelah diperbaiki : " ;
   for (int i = 0; i < jml; i++){
    cout << nums[i] << " ";

   }

   cout << endl;

   return 0;
}