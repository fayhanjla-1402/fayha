/*
Nama Program : Rekap Tour
Nama         : Fayha Najla Rahman
NPM          : 140810250011
Tanggal Buat : 12 November 2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct InfoTour{
    string nmKota;
    int tiket;
    int kapasitas;
    double persentase;
};

int main(){
    int n;
    cout << "Masukkan jumlah data: " ;
    cin >> n;

    InfoTour data[n];
    for(int i = 0; i < n; i++){
        cin >> data[i].nmKota;
        cin >> data[i].tiket;
        cin >> data[i].kapasitas;
        data[i].persentase = (double)data[i].tiket / data[i].kapasitas * 100;
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(data[j].persentase < data[j+1].persentase){
                InfoTour temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    cout << fixed << setprecision(2);
    for(int i = 0; i < n; i++){
        cout << data[i].persentase << " " << data[i].nmKota << endl;

    }

}