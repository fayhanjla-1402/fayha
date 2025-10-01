#include <iostream>
using namespace std;

string balikString(string str){
    if (str.length() == 0)
        return "";
    
    return balikString(str.substr(1)) + str[0];

}
int main(){
    string input;
    cout << "Masukkan kata : ";
    getline(cin, input);

    string hasil = balikString (input);
    cout << "String dibalik : " << hasil << endl;

    return 0;
}


