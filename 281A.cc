#include <iostream>
 
int main() {
    std::string name;
    std::cin >> name;
    
    if (name[0] >= 97) {
        name[0] = name[0] - 32;
    }
    
    std::cout << name << std::endl;
    return 0;
}
