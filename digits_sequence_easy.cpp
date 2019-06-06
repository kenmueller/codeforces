#include <iostream>
#include <string>

using namespace std;

int main() {
	int k;
	cin >> k;
	string numbers = "";
	for (int i = 1; i <= k; i++) {
		if (numbers.length() >= k)
			break;
		numbers += to_string(i);
	}
	cout << numbers[k - 1];
}