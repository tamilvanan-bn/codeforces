#include <iostream>
#include <string>

int main() {
    int t;
    std::string cf = "codeforces";
    std::cin >> t;
    
    while (t--) {
        std::string ip;
        std::size_t i{0}, count{0};
        
        std::cin >> ip;
        for (const unsigned char& c : ip) {
            
            if (c != cf[i++]) {
                count++;
            }
        }
        
        std::cout << count << std::endl;
    }

    return 0;
}
