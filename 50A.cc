#include <iostream>

int main() {
    int n, m, hor{0}, ver{0}, to_include{0};
    std::cin >> n >> m;

    int M = std::min(m, n);
    int N = std::max(m, n);

    while (hor < M) {
        if (hor + 2 == M){
            hor += 2;
            break;
        } else if (hor + 2 > M) {
            to_include++;
            break;
        }
        hor += 2;
    }


    while (ver < N) {
        ver++;
    }

    if (to_include > 0) {
        while (to_include < N) {
            if (to_include + 2 == N){
                to_include += 2;
                break;
            }
            to_include += 2;
        }
    }

    std::cout << ver * hor / 2 + to_include / 2 << std::endl;
    return 0;
}
