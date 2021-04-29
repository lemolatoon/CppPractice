#include <climits>
#include <iostream>

using namespace std;

int main() {
	cout << "\nHow Many Numbers do you want to sort :";
	int n;
	cin >> n;

	int Array[n];
	cout << "\nEnter any 6 Numbers for Unsorted Array :";

	for (int i = 0; i < n; i++) {
		cin >> Array[i];
	}	
	cout << endl;
	
	for (int i = 0; i < n; i++) {
		int min = INT_MAX;
		for (int j = i; j < n; j++) {
			cout << Array[j] << "と" << min << "の比較" << endl;
			if (Array[j] < min) {
				cout << Array[j] << "の方が小さいから新たな最小値として登録" << endl;
				int temp = min;
				min = Array[j];
				Array[j] = temp;
			}
		}
		cout << i + 1 << "回目の最小値は" << min << endl;

		//一回目でない　かつ　新たな最小値が前の最小値より大きいなら
		if(i != 0 && Array[i-1] > min) {
			int temp = Array[i-1];
			Array[i-1] = min;
			Array[i] = temp;
		} else {
			Array[i] = min;
		}
		cout << i + 1 << "週目が終了" << endl << endl;
	}

	cout << "\nSorted Array :";
	for (int i = 0; i < n; i++) {
		cout << Array[i] << " ";
	}
	cout << endl;
}

