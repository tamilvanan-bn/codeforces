#include <iostream>

int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;
    long long hor_count{0}, ver_count{0}, to_cover{0};
   
    if (a == 1) {
        std::cout << n * m << std::endl;
        return 0;
    }

    while (to_cover < n) {
      hor_count++;
      to_cover += a;
    }

    to_cover = 0;

    while (to_cover < m) {
        ver_count++;
        to_cover += a;
    }
    
    hor_count *= ver_count;
    std::cout << hor_count << std::endl;
    return 0;
}
