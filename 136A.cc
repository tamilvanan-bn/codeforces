#include <iostream>
#include <unordered_map>

int main() {
    int n, len{0}, i{0};
    std::cin >> n;
    int arr[n];
    len = n;
    
    while (n--) {
        std::cin >> arr[i++];
    }
    
    std::unordered_map<int, int> mp;
    for (int i = 0; i < len; i++) {
        mp.insert({arr[i], i});
    }
    
   for (int i = 1; i <= len; i++) {
       auto search = mp.find(i);
       std::cout << search->second + 1 << ' ';
   }
   
   std::cout << std::endl;
   
   return 0;
}
