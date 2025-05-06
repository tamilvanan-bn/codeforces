#include <iostream>
#include <vector>

int main() {
    int t, res{0}, group{0};
    std::vector<int> magnets;
    std::cin >> t;
    
    while (t--) {
        int n;
        std::cin >> n;
        magnets.push_back(n);
    }
    
    
    for (std::size_t i = 1; i < magnets.size(); i++) {
        if (magnets[i - 1] == magnets[i]) {
            group++;
        } else {
            group = 0;
            res++;
        }
    }
    
    std::cout << ++res << std::endl;
    return 0;
}
