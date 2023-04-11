#include <iostream>
 
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
 
    if (a + b <= c || b + c <= a || c + a <= b)
        std::cout << "UNDEFINED\n";
    else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
        std::cout << "YES\n";
    else 
        std::cout << "NO\n";
}