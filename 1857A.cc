#include <iostream>
 
int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n, odd_sum{0}, even_sum{0};
        std::cin >> n;
        
        while (n--) {
            int i;
            std::cin >> i;
            if (i & 1) {
                odd_sum +=  i;
            } else {
                even_sum += i;
            }
        }
        
        
        if ((odd_sum & 1) && (even_sum & 1) || !(odd_sum & 1) && !(even_sum & 1)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}
