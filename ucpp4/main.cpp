#include <iostream>

int main() {
	int n;
	std::cout << "n:";
	std::cin >> n;

	if (int mod = n % 10; mod > 5) {
		std::cout << "nは10で割り切れません (mod > 5)" << std::endl;
		std::cout << "mod = " << mod << std::endl;
	} else if (int mod = n % 10; mod > 0) {
		std::cout << "nは10で割り切れません (0 < mod <= 5)" << std::endl;
		std::cout << "mod = " << mod << std::endl;
	} else {
		std::cout << "nは10で割り切れます" << std::endl;
	}
	std::cout << "mod = " << mod << std::endl;

	/*
	if(auto p = make_shared<A>(42); p != nullptr) {
	}
	*/
}
