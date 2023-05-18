#include <vector>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> place(n);
    for ( int i = 1; i <= n; ++i) {
        int s;
        std::cin >> s; 
        place[s - 1] = i;
    }

    for (int i : place) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}