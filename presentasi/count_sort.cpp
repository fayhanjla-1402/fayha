#include <iostream>
using namespace std;

void countSorting(int arr[], int n){
    int max = arr[0];
    //Menentukan nilai maksimum
    for(int i = 1;  i < n; i++){
        if(arr[i] > max){
            max = arr[i];

        }

    }
    int count[max+1]={0};
    //Hitung frekuensi elemen
    for(int i = 0; i < n; i++){
        count[arr[i]]++;

    }


    int index = 0;
    //Mencetak bilangan yang sudah terurut
    for(int i = max ; i >= 0; i--){
        while(count[i] > 0){
            arr[index++] = i;
            count[i]--;
        }
    }

}

int main(){
    int n;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    countSorting(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";

    } cout << endl;

}
