#include <iostream>
#include <vector>
#include <string>



// состоять из символов таблицы ASCII с кодами от 33 до 126;
// быть не короче 8 символов и не длиннее 14;
// из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — в пароле должны присутствовать не менее трёх любых.

bool isGood(std::string pass) {

    if (pass.size() < 8 || pass.size() > 14) {
        return false;
    }
    int upper;
    int lower;
    int digit;
    int other;

    for (char c : pass) {
        if (c < 33 || c > 126) {
            return false;
        }
        if ('A' <= c && c <= 'Z') {
            upper = 1;
        }
        else if ('a' <= c && c <= 'z') {
            lower = 1;
        }
        else if('0' <= c && c <= '9') {
            digit = 1;
        }
        else {
            other = 1;
        }
    }
    return upper + lower + digit + other >= 3;
}


int main() {
    
    std::string pass;
    getline(std::cin, pass);
    
    if(isGood(pass)) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
}