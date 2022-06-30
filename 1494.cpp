#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int size, low, high, ball, mid, num, ball2, n = 1;
	cin >> size;
	vector <int> Balls;
	for (int i = 1; i < size + 1; i++) {
		Balls.push_back(i);
	}
	cin >> ball;
	for (int i = 0; i < size - 1; i++) {
		low = 0;
		high = size - n;
		while (low <= high) {
			mid = (high + low) / 2;
			if (ball == Balls[mid]) {
				num = mid;
				break;
			}
			else if (ball > Balls[mid])
				low = mid + 1;
			else if (ball < Balls[mid])
				high = mid - 1;
		}
		Balls.erase(Balls.begin() + num);
		cin >> ball2;
		if (ball2 == Balls[mid - 1] || ball2 > ball)
		{
			ball = ball2;
			n++;
		}
		else {
			cout << "Cheater";
			return 0;
		}
	}
	cout << "Not a proof";
	return 0;
}