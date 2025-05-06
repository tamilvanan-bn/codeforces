#include <iostream>

int main() {
    int n, m, track{0};
    std::cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
        if (!(i & 1)) {
            for (int j = 0; j < m; ++j) {
                std::cout << "#";
            }
        } else {
            if (track & 1) {
                std::cout << "#";
                for (int j = 1; j <m; ++j) {
                    std::cout << ".";
                }
            } else {
                for (int j = 0; j < m - 1; ++j) {
                    std::cout << ".";
                }
                std::cout << "#";
            }
            track++;
        }
        
        std::cout << std::endl;
    }
    return 0;
}
