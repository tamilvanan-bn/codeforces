#include <iostream>

int main() {
    int k, n, w, sum{0};
    std::cin >> k >> n >> w;

    for (std::size_t i = 1; i <= w; i++) {
	sum += k * i;
    }

    if (sum > n) {
	std::cout << sum - n << std::endl;
    } else {
	std::cout << 0 << std::endl;
    }

    return 0;
}
