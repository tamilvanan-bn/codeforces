#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
  int n, len, i{0};
  std::cin >> n;
  len = n;
  
  int arr[n];
  while (n--) {
    std::cin >> arr[i++];
  }

  std::map<int, std::vector<int>> mp = { {1, {}}, {2, {}}, {3, {}}};
  for (int i = 0; i < len; i++) {
    mp[arr[i]].push_back(i + 1);
  }
  
  std::size_t mn = -1;
  for (const auto& i : mp) {
    mn = std::min(mn, i.second.size());
    if (mn == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
  }
  
  std::vector<std::vector<int>> res;
  
  for (int i = 0; i < mn; i++) {
      std::vector<int> temp;
      temp.push_back(mp[1][mp[1].size() - i - 1]);
      temp.push_back(mp[2][mp[2].size() - i - 1]);
      temp.push_back(mp[3][mp[3].size() - i - 1]);
      res.push_back(temp);
  }
  
  std::cout << mn << std::endl;
  
  for (int i = res.size() - 1; i >= 0; i--) {
      for (const int& j : res[i]) {
          std::cout << j << ' ';
      }
      std::cout << std::endl;
  }

  return 0;
}
