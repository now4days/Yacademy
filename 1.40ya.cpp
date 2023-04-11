#include <iostream>

int main()
{
    int x, x1, y, y1;

    std::cin >> x >> y >> x1 >> y1;
    if (x == x1 || y == y1 || std::abs(x - x1) == std::abs(y - y1))
    {
        std::cout << "YES\n";
    }
    else
        std::cout << "NO\n";
}