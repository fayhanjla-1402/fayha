/*
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Nama Program: Menghitung keliling ladang
Tanggal Buat: 5 Oktober 2025 
Deskripsi   : Rimuru memiliki ladang berbentuk persegi panjang. Panjang ladangnya adalah p meter dan lebarnya q meter. Rimuru ingin merubah ukuran ladangnya dengan cara menambah panjang ladang sebesar setengah dari panjang awal. Dan mengurangi lebar ladang sebesar setengah dari lebar awal. Setelah perubahan, Rimuru ingin mengetahui total keliling ladang barunya.
*/

#include <iostream>
using namespace std;


int main(){
    double p, q, pAkhir, qAkhir, keliling;
    cout << "Masukkan panjang awal : ";
    cin >> p;
    cout << "Masukkan lebar awal : ";
    cin >> q;

    pAkhir = p + (p / 2);
    qAkhir = q - (q / 2);
    keliling = (2 * pAkhir) + (2 * qAkhir);

    cout << "\nLuas keliling ladang adalah " << keliling << endl;

    return 0;
    
}