#include <iostream>

using namespace std;

int main() {
	long long x, y, z;
	cin >> x >> y >> z;
	const long long remainderX = x % z;
	const long long remainderY = y % z;
	if (remainderX + remainderY < z)
		cout << x / z + y / z << " 0";
	else {
		long long debt;
		if (remainderX < remainderY) {
			debt = remainderX - (remainderX + remainderY) % z;
			y += debt;
			x -= debt;
		} else {
			debt = remainderY - (remainderX + remainderY) % z;
			x += debt;
			y -= debt;
		}
		cout << x / z + y / z << ' ' << debt;
	}
}