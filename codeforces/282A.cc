#include <iostream>

int main() {
    int x = 0, n;
    std::cin >> n;
    while (n--) {
        std::string str;
        std::cin >> str;
        if (str == "X++" || str == "++X") {
            ++x;
        } else {
            --x;
        }
    }

    std::cout << x << std::endl;
    return 0;
}
