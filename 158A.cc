#include <iostream>

int main() {
  int n{0}, i{0}, count{0}, k{0};
  std::cin >> n >> k;
  int arr[n] = {0};

  while(n--) {
    int val;
    std::cin >> arr[i++];
  }

  for (const int& i : arr) {
    if (i >= arr[k - 1] && i > 0) count++;
  }

  std::cout << count << std::endl;

  return 0;
}
