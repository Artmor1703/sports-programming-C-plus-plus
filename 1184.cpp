#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;


int main()
{
	long long int num, req, dlin = 0, high, low = 0, sum;
	long float answ = 0, mid;
	cin >> num >> req;
	num = num;
	double* stock = new double[num];
	for (int i = 0; i < num; i++) {
		cin >> stock[i];
		stock[i] = stock[i] * 100;
		dlin += stock[i];
	}
	high = dlin + 1;
	while (low <= high) {
		mid = (high + low) / 2;
		sum = 0;
		for (int i = 0; i < num; i++)
			sum += stock[i] / mid;
		if (sum >= req) {
			if (answ < mid)
				answ = mid;
			low = mid + 1;
		}
		else if (sum < req)
			high = mid - 1;
	}
	cout << fixed << setprecision(2) << answ / 100;

}