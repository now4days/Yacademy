#include <iostream>
#include <string>

void Append(std::string& res, char c) {
    if (res.back() != c) {
        res.push_back(c);
    }
}

std::string Soundex(const std::string& word) {
    std::string res;
    res.push_back(word[0]);

    for (size_t i = 1; i < word.size(); ++i) {
        char c = word[i];
        if (c == 'a' || c == 'e' || c == 'h' || c == 'i' ||
            c == 'o' || c == 'u' || c == 'w' || c == 'y') {
        
        } else if (c == 'b' || c == 'f' || c == 'p' || c == 'v') {
            Append(res, '1');
        } else if (c == 'c' || c == 'g' || c == 'j' || c == 'k' || c == 'q' ||
                   c == 's' || c == 'x' || c == 'z') {
            Append(res, '2');
        } else if (c == 'd' || c == 't') {
            Append(res, '3');
        } else if (c == 'l') {
            Append(res, '4');
        } else if (c == 'm' || c == 'n') {
            Append(res, '5');
        } else if (c == 'r') {
            Append(res, '6');
        }
    }

    while (res.size() < 4) {
        res.push_back('0');
    }

    res.resize(4);
    return res;
}

int main() {
    std::string word;
    std::cin >> word;
    std::cout << Soundex(word) << std::endl;
}
