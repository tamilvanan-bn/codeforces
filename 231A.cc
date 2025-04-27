#include <iostream>

int main() {
    int n, count = 0;
    std::cin >> n;
    while (n--) {
        int p, v, t;
        std::cin >> p >> v >> t;
        if ((p == 1 && v == 1)
            || (v == 1 && t == 1)
            || (t == 1 && p == 1)
        ) {
            count++;
        }
    }
    std::cout << count;
    return 0;
}
