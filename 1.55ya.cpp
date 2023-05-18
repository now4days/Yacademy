#include <iostream>
#include <vector>

int main() {
    int m, n, k;
    std::cin >> m >> n >> k;
    
    std::vector<std::vector<char>> field(m, std::vector<char>(n, '0'));

    for (int i = 0; i < k; i++) {
        int row, col;
        std::cin >> row >> col;
        field[row - 1][col - 1] = '*';
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (field[i][j] != '*') {
                int count = 0;

                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        int newRow = i + dx;
                        int newCol = j + dy;

                        if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n) {
                            if (field[newRow][newCol] == '*') {
                                count++;
                            }
                        }
                    }
                }
                field[i][j] = '0' + count;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << field[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}