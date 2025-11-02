#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];

    }

    int total = 0;
    for(int i = 0; i < n; i++){
        total += nums[i];
    }

    cout << total;
    return 0;
}