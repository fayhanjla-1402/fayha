#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Masukkan jumlah customer : ";
    cin >> m;
    cout << "Masukkan jumlah account : ";
    cin >> n;

    int account[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> account[i][j];

        }
    }
    cout << endl;

    int maks = 0;
    for(int i = 0; i < m; i++){
        int hasil = 0;
        for(int j = 0; j < n; j++){
            hasil += account[i][j];

        }

        if (hasil > maks){
            maks = hasil;
        }
    }    
    cout << "Kekayaan maksimum adalah : " << maks << endl;


    return 0;
}