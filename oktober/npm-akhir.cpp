#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int lebar = n;
    int tinggi = 2 * n;
    
    for(int i = 0; i < tinggi; i++){
        for(int p = 0; p < 2; p++){
            for(int j = 0; j < lebar; j++){
                cout << "1";

            }
            cout << " ";
        } 
        cout << endl;
    }

    return 0;
}