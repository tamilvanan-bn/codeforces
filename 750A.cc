#include <iostream>
 
int main() {
    int n, k, i = 1, acc{0}, count{0};
    std::cin >> n >> k;
    int rem = 239 - k;
    while (acc < rem && count < n) {
        acc += 5 * i;
        i++;
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}
