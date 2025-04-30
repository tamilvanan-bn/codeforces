#include <iostream>
#include <string>

int main() {
    int n, count{0};
    std::string colors;
    
    std::cin >> n;
    std::cin >> colors;
    
    for (std::size_t i = 1; i < n; i++) {
        if (colors[i - 1] == colors[i]) {
            while (colors[i - 1] == colors[i]) {
                i++;
                count++;
            }
        }
    }
    
    std::cout << count << std::endl;
}
