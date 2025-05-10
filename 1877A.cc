#include <iostream>

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n, sum{0}, pos{0}, neg{0};
        std::cin >> n;
        n--;
        
        while (n--) {
            int ip;
            std::cin >> ip;
            if (ip < 0) {
                neg += ip;
            } else {
                pos += ip;
            }
        }
        
        if (std::abs(neg) > pos) {
            std::cout << (std::abs(neg) - pos) << std::endl;
        } else {
            std::cout << -(pos - std::abs(neg)) << std::endl;
        }
    }
  
    return 0;
}
