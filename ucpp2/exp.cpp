#include <iostream>

int main() {
	int n{1};

	int x{n = 3}; //式文
	//作用: n = 3 => 3
	//副作用 n に 3 を代入
	n = 4;
	
	int a;
	(a = 1) = 2;

	std::cout << "x = " << x << std::endl;
	std::cout << (n + 10) << std::endl;
	//評価

	//expression; : 式文 expression statement
}
