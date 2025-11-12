#include <iostream>
using namespace std;

void findIndex(const string &text, char c){
    const char *ptr = text.c_str();
    int index = 0;
    bool found = false;

    while (*ptr != '\0'){
        if (*ptr == c){
            cout << index + 1 << " ";
            found = true;
        }
        ++index; 
        ++ptr; //nilai dinaikkan dulu
    }

    if (!found){
        cout << -1;
    }
}
int main(){
    string text;
    getline(cin, text);

    char c;
    cin >> c;

    findIndex(text, c);

}