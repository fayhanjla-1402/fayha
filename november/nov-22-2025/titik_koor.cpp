/*
Nama Program: Titik Koordinat
Nama        : Fayha Najla Rahman
NPM         : 140810250011
Tanggal Buat: 22 November 2025
*/

#include <iostream>
using namespace std;

struct Titik{
    float absis;
    float ordinat;
};

// Mencari titik tengah
// versi function
Titik titikTengah(Titik A, Titik B){
    Titik T;
    T.absis = (A.absis + B.absis) / 2;
    T.ordinat = (A.ordinat + B.ordinat) / 2;
    return T;
}

// versi void
void ttkTengah(Titik A, Titik B, Titik &T){
    T.absis = (A.absis + B.absis) / 2;
    T.ordinat = (A.ordinat + B.ordinat) / 2;
}

// Cermin Sb X
// versi function
Titik cerminX(Titik A){
    Titik H;
    H.absis = A.absis;
    H.ordinat = -A.ordinat;
    return H;
}

// versi void
void crmnX(Titik A, Titik &H){
    H.absis = A.absis;
    H.ordinat = -A.ordinat;
}

// Cermin sb Y
// versi function
Titik cerminY(Titik A){
    Titik H;
    H.absis = -A.absis;
    H.ordinat = A.ordinat;
    return H;
}

void crmnY(Titik A, Titik &H){
    H.absis = -A.absis;
    H.ordinat = A.ordinat;
}

int main (){
    Titik A, B, T, H;

    cout << "Masukkan Titik A(x, y): ";
    cin >> A.absis >> A.ordinat;

    cout << "Masukkan Titik B(x, y): ";
    cin >> B.absis >> B.ordinat;

    T = titikTengah(A, B);
    cout << "\nTitik tengah(function): " << T.absis << ", " << T.ordinat << endl;

    ttkTengah(A, B, T);
    cout << "Titik tengah(void): " << T.absis << ", " << T.ordinat << endl;

    H = cerminX(A);
    cout << "\nCermin X dari A(function): " << H.absis << ", " << H.ordinat << endl;
    crmnX(A, H);
    cout << "Cermin X dari A(void): " << H.absis << ", " << H.ordinat << endl;

    H = cerminY(A);
    cout << "\nCermin Y dari A(function): " << H.absis << ", " << H.ordinat << endl;
    crmnY(A, H);
    cout << "Cermin Y dari A(void): " << H.absis << ", " << H.ordinat << endl;

    return 0;
}
