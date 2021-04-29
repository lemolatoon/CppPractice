#include <iostream>

int main() {
	//int n; 

	/*
	do {
		std::cout << "正の整数値:";
		std::cin >> x;
	} while (x <= 0);
	*/

	/*
	std::cout << "何個表示しますか:";
	std::cin >> n;
	*/

	/*
	while (x >= 0) {
		std::cout << x-- << std::endl;
		//--x; // decrement
		// --x -> x から 1 を引いた後の値
		// x--; -> もとの x の値
		//++x;, x++
	}
	*/

	char c = 'a';
	c = '*';
	int i  = 0;
	while(i < 26) {
		static_cast<char>(i + c);
		std::cout << static_cast<char>(i + c); 
		++i;
		//++c;
	}
	std::cout << '\n';
}
