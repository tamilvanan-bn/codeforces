#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

int main() {
    std::string expr, res = "";
    std::cin >> expr;
    std::vector<int> nums;
    
    for (const char& c : expr) {
        if (isdigit(c)) {
            nums.push_back(c - '0');
        }
    }
    
    std::sort(nums.begin(), nums.end());
    
    for (std::size_t i = 0; i < nums.size(); i++) {
        if (i == nums.size() - 1) {
            std::cout << nums[i] << std::endl;
        } else {
            std::cout << nums[i] << '+';
        }
    }

    return 0;
}
