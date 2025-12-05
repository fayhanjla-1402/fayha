#include <iostream>
using namespace std;

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cout << "Masukkan jumlah siswa : ";
    cin >> n;
    int heights[n];

    for (int i = 0; i < n; i++){
        cin >> heights[i];

    }

    int expected[n];
    for(int i = 0; i < n; i++){
        expected[i] = heights[i];

    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (expected [j] > expected [j + 1]){
                tukar(expected [j + 1], expected[j]);
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << expected[i] << " "; 

    }
    cout << endl;

    int total = 0;
    for (int i = 0; i < n; i++){
        if(heights[i] != expected[i]){
                total++;

        }
    }
    
    cout << total << endl;

    return 0;
}