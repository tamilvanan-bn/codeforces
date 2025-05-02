#include <iostream>

int main() {
  int n, h, count{0};
  std::cin >> n >> h;

  while (n--) {
    int current_person;
    std::cin >> current_person;
    if (current_person < h || current_person == h) {
      count++;
    } else {
      count += 2;
    }
  }

  std::cout << count << std::endl;

  return 0;
}
