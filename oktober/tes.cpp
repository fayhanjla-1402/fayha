#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {           // mulai dari 2 karena 1 bukan prima
        bool prima = true;

        for (int j = 2; j < i; j++) {         // cek apakah i habis dibagi j
            if (i % j == 0) {
                prima = false;
                break;
            }
        }

        if (prima) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
