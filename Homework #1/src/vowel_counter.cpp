#include "../include/vowel_counter.h"

int return_count_vowel_letters(std::string s) {
    int cnt_vowel_letters = 0;
    for (auto c : s) {
        if (c == 'a' || c == 'o' || c == 'i' || c == 'e' || c == 'u') {
            cnt_vowel_letters++;
        }
    }

    return cnt_vowel_letters;
}