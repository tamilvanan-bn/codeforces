#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

int main() {
    std::string name;
    int lower_count{0}, upper_count;
    
    std::cin >> name;
    
    for (const char& c : name) {
        if (c >= 97) {
            lower_count++;
        }
    }
    
    upper_count = name.size() - lower_count;
    
    if (upper_count > lower_count) {
        std::transform(name.begin(), name.end(), name.begin(), ::toupper);
        std::cout << name << std::endl;
    } else {
        std::transform(name.begin(), name.end(), name.begin(), ::tolower);
        std::cout << name << std::endl;
    }
    
    return 0;
}
