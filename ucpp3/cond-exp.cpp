#include <iostream>

int main() {
	int a, b;
	std::cout << "a b:";
	std::cin >> a >> b;

	/*
	int min;
	if (a < b) {
		min = a;
	} else {
		min = b;
	}
	*/

	//int min = a < b ? a : b;
	int min{a < b ? a : b};
	//       式0 ? 式１ : 式2

	std::cout << "min = " << (a < b ? a : b )<< std::endl;
}
