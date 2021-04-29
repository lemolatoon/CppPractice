#include <iostream>

int main() {
	int hand;


	std::cout << "手を選んでね (0:グー 1:チョキ 2:パー)" << std::endl;
	std::cin >> hand;

	/*
	if(hand == 0) {
		std::cout << "グー" << std::endl;
	} else if (hand == 1) {
		std::cout << "チョキ" << std::endl;
	} else if (hand == 2) {
		std::cout << "パー" << std::endl;
	}
	*/
	

	switch (hand) {
	case 0:
		std::cout << "グー" << std::endl;
	case 1:
		std::cout << "チョキ" << std::endl;
	case 2:
		std::cout << "パー" << std::endl;
		break;
	default:
		std::cout << "分からない手でした" << std::endl;
	}
	
	std::cout << "swittch文が終わりました" << std::endl;
}
