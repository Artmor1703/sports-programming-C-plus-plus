#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int M, a, mx = 0, l = 0;
	vector <int> anws;
	cin >> M;
	vector<int> Bur;
	for (int i = 0; i < M; i++) {
		cin >> a;
		Bur.push_back(a);
	}
	while (Bur.back() != -1) {
		for (int i = 0; i < M; i++)
			mx = max(mx, Bur[i]);
		anws.push_back(mx);
		mx = 0;
		Bur.erase(Bur.begin());
		cin >> a;
		Bur.push_back(a);
		l++;
	}
	for (int i = 0; i < l; i++)
		cout << anws[i] << "\n";
	return 0;
}