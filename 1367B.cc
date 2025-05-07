#include <iostream>
#include <vector>
 
int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n, odd{0}, even{0};
        std::cin >> n;
        
        int arr[n];
        
        for (std::size_t i = 0; i < n; i++) {
            std::cin >> arr[i];
            if ((i % 2 == 0) && (arr[i] % 2 != 0)) {
                odd++;
            } else if ((i % 2 != 0) && (arr[i] % 2 == 0)) {
                even++;
            }
        }
        
        if (odd == even) {
            std::cout << odd << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }
    
    return 0;
}
