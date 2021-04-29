#include <iostream>

int main() {
	// sort
	int a, b;

	std::cout << "a, b:";
	std::cin >> a >> b;

	// a <= b
	if(a > b) {
		// a <--> b
		/*
		int tmp = a;
		a = b;
		b = tmp;
		*/

		/*
		a += b;
		b = a - b;
		a -= b;
		*/

		std::swap(a, b);
	}

	std::cout << "a <= b となるようにソートしました" << std::endl;
	std::cout << a << "," << b << std::endl;
}
