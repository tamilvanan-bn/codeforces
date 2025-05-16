#include <iostream>
 
int main() {
	long long n, ans{0};
	int j = 4;
	std::cin >> n;
	int arr[] = {1, 5, 10, 20, 100};
	
	while (n > 0) {
	    while (n >= arr[j]) {
	        n -= arr[j];
	        ans++;
	    }
	    j--;
	}
	
	std::cout << ans << std::endl;
    
    return 0;
}
