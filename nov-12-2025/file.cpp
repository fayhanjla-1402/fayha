#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string kata;
    getline(cin, kata);

    ofstream file("data.txt", ios :: app);

    if(!file){
        cout << "Tidak ada di file!";
    }

    file << kata << endl;
    file.close();
}