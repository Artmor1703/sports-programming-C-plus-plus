#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, count = 1, a, b;
	cin >> n;
	int* arr = new int[n];
	int* arr1 = new int[n];
	vector< pair <int, int> > Otr;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> b;
		if (a < b) {
			arr[i] = a;
			arr1[i] = b;
		}
		else {
			arr[i] = b;
			arr1[i] = a;
		}
	}
	for (int i = 0; i < n; i++)
		Otr.push_back(make_pair(arr1[i], arr[i]));
	sort(Otr.begin(), Otr.end());
	for (int i = 1; i < n; i++) {
		if (Otr[i].second < Otr[i - 1].first || Otr[i].second < Otr[i - 1].first) {
			Otr.erase(Otr.begin() + count);
			count--;
			n--;
			i--;
		}
		count++;
	}
	cout << n << "\n";
	for (int i = 0; i < n; i++)
		cout << Otr[i].second << " " << Otr[i].first << "\n";
}