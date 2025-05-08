#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s1, s2, s3;
        std::cin >> s1 >> s2 >> s3;
        std::cout << s1[0] << s2[0] << s3[0] << std::endl;
    }
    return 0;
}
