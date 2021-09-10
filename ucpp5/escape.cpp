#include <iostream>

int main() {
	std::cout << "\x1b[31mHOGE" << std::endl;
	std::cout << "\x1b[0mFOO" << std::endl;
	std::cout << "\x1b[32mFOO" << std::endl;
	for(int color = 0; color < 90; color++) {
		std::cout << "\x1b[" << color << "mABCDEFG" << std::endl;
	}
	//C:\Users
	//こんにちは
}
