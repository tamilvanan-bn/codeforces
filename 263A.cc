#include <iostream>

int main() {
    int mat[5][5], pos_i, pos_j;
    for (std::size_t i = 0; i < 5; i++) {
        for (std::size_t j = 0; j < 5; j++) {
            std::cin >> mat[i][j];
            if (mat[i][j] == 1) pos_i = i, pos_j = j;
        }
    }
    int min_moves{0};
    if (pos_i > 2) {
        while (pos_i > 2) {
            if (pos_i - 1 == 2) {
                pos_i--;
                min_moves++;
                break;
            }
            pos_i--;
            min_moves++;
        }
    } else if (pos_i < 2) {
        while (pos_i < 2) {
            if (pos_i + 1 == 2) {
                pos_i++;
                min_moves++;
                break;
            }
            pos_i++;
            min_moves++;
        }
    }

    if (pos_j > 2) {
        while (pos_j > 2) {
            if (pos_j - 1 == 2) {
                pos_j--;
                min_moves++;
                break;
            }
            pos_j--;
            min_moves++;
        }
    } else if (pos_j < 2) {
        while (pos_j < 2) {
            if (pos_j + 1 == 2) {
                pos_j++;
                min_moves++;
                break;
            }
            pos_j++;
            min_moves++;
        }
    }

    std::cout << min_moves << std::endl;
    return 0;
}
