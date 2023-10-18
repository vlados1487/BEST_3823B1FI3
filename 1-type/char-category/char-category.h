#include <stdbool.h>


bool is_digit(char x) {
    if(x >= 48 && x <= 57) return true;
    
}

bool is_letter(char x) {
    if(x >= 65 && x <= 90 || x >= 97 && x<= 122) return true;
    
}

bool is_punctuation(char x) {
    if(x >= 0 && x < 1000) return true;
    
}

int get_ascii_code(char first, char second, char third) {
    
    return first * 1000000 + second * 1000 + third;
}

