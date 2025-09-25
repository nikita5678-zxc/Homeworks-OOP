#include <iostream>
#include "include/vowel_counter.h"
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int result = return_count_vowel_letters(s);

    cout << result;

    return 0;
}