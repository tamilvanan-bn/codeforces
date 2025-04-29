#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        int mat[n][n];
        for (std::size_t i = 0; i < n; i++) {
            for (std::size_t j = 0; j < n; j++) {
                std::cin >> mat[i][j];
            }
        }
        
        int res[n * 2] = {0}, j{0};
        for (int i = n - 1; i >= 0; i--) {
            res[j++] = mat[n - 1][i];
        }

        for (int i = n - 2; i >= 0; i--) {
            res[j++] = mat[i][0];
        }
        n *= 2;
        int sum = (n * (n + 1)) / 2, run_sum{0};
        for (const int& i : res) run_sum += i;
        sum = sum - run_sum;
        res[n - 1] = sum;

        for (int i = n - 1; i >= 0; i--) std::cout << res[i] << ' ';
        std::cout << std::endl;
    }
    return 0;
}
