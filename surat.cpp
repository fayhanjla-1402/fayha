#include <iostream>
#include <string>
using namespace std;

struct DataSurat{
    string namaPgrm;
    string namaPnrm;
    string noTelp;

};

void input(DataSurat &surat){
    cin >> surat.namaPnrm;
    cin >> surat.namaPgrm;
    cin >> surat.noTelp;

}

void output(DataSurat &surat){
    cout << "Nama Penerima Surat : " << surat.namaPnrm << endl;
    cout << "Nama Pengirim Surat : " << surat.namaPgrm << endl;
    cout << "Nomor Telpon Penerima Surat : " << surat.noTelp << endl;

}

int main(){
    DataSurat surat;
    input(surat);
    output(surat);

    return 0;

}