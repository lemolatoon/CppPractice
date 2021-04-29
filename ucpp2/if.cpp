#include <iostream>

int main() {
	int n{1};

	std::cout << "n:";
	std::cin >> n;

	//bool c{n > 0}; //false(偽) or true(真)
	// >, <, >=, <=, ==, !=

	if(n == 0) {
		std::cout << "n は 0 です" << std::endl;
		//複文 (block statement)
	} else if (n > 0) {
		std::cout << "n (" << n << ") は正です" << std::endl;
	} else {
		std::cout << "n (" << n << ") は負です" << std::endl;
	}
	// if(条件式) 文 : if 文
	// if(条件式) 文1 else 文2
}
