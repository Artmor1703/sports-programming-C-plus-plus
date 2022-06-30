#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int  n, n1, a, an, low, high, mid, j1 = 0, j2 = 0, j3 = 0;
	cin >> n;
	vector <int> nach;
	vector <int> con;
	vector <int> answ;
	for (int i = 0; i < n; i++) {
		cin >> a;
		nach.push_back(a);
		cin >> a;
		con.push_back(a);
	}
	an = -1;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> a;
		low = 0;
		high = n - 1;
		while (low <= high) {
			mid = (high + low) / 2;
			if (a >= nach[mid] && con[mid] >= a) {
				j1 = mid;
				low = mid + 1;
				j2++;
			}
			else if (a < nach[mid])
				high = mid - 1;
			else if (con[mid] < a)
				low = mid + 1;
			if (j1 > 0 && j2 == j3)
				break;
			j3 = j2;
		}
		for (int j = j1; j < n; j++) {
			if (a < nach[j])
				break;
			if (con[j] < a)
				continue;
			an = j + 1;
		}
		answ.push_back(an);
		an = -1;
		j1 = 0;
	}
	for (int i = 0; i < n1; i++)
		cout << answ[i] << endl;
}