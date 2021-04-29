#include <iostream>

int main() {
	int n;
	std::cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; ++i) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}
