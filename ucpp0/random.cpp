#include <iostream>
#include <random>

using namespace std;

int main() {
	std::random_device rd;

	std::mt19937 mt(rd());

	std::uniform_int_distribution<int> dist(1, 100000);

	cout << "How Many Numbers Do You Want to Generate? : ";

	int n;
	cin >> n;

	cout << "\nGenerating..." << endl;

	for(int i = 0; i < n; i++) {
		cout << dist(mt) << " ";
	}
	cout << endl;
}
