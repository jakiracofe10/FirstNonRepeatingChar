#include <iostream>

using namespace std;

const int ASCII_VALUES = 256;

//Print out the first non repeating character of a string

int main() {
    string input;
    cin >> input;
    int charCount[ASCII_VALUES] = {0};
    for (auto i : input) {
        charCount[i]++;
    }
    for (auto i : input) {
        if (charCount[i] < 2) {
            cout << i;
            break;
        }
    }
    return 0;
}