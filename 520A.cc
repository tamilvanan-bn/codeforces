#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
	int n, i{0};
	int arr[26] = {0};
	
	std::cin >> n;
	
    if (n < 26) {
        std::cout << "NO" << std::endl;
    } else {
        std::string word;
        std::cin >> word;
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        
        for (const char& c : word) {
            arr[c - 97]++;
            
        }
        
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                std::cout << "NO" << std::endl;
                return 0;
            }
        }
        
        std::cout << "YES" << std::endl;
    }
    
    return 0;
}
