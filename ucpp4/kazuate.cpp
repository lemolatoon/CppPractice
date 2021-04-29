#include <iostream>
#include <random>

int main() {
	std::random_device seed_gen;
	std::mt19937 engine{seed_gen()};
	std::uniform_int_distribution<> dist{0,99};

	const int no = dist(engine);
	int x;

	std::cout << "数あてゲーム開始!" << std::endl;
	std::cout << "0 - 99 の数を当ててください" << std::endl;

	do {
		std::cout << "いくつかな:";
		std::cin >> x;

		if (no > x) {
			std::cout << "もっと大きいよ" << std::endl;
		} else if (no < x) {
			std::cout << "もっと小さいよ" << std::endl;
		}
	} while (x != no);

	std::cout << "正解です" << std::endl;
}
