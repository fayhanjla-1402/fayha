#include <iostream>
using namespace std; 

int main(){
    int n;
    int nums[n];
    cout << "Masukkan jumlah angka : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> nums[i];

    }

    int runningSum[n];
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j <= i; j++){
            sum += nums[j];

        }
        runningSum[i] = sum;
    }

    for(int i = 0; i < n; i++){
        cout << runningSum[i] << " ";

    }
    
    cout << endl;

    return 0;

}