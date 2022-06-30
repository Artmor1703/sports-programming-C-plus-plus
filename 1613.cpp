#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, q, low, high, mid, ge, count = 0, niz, ver;

	cin >> n;
	int* arr = new int[n];
	int* arr1 = new int[n];
	vector< pair <int, int> > zap;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr1[i] = i + 1;
	}
	for (int i = 0; i < n; i++)
		zap.push_back(make_pair(arr[i], arr1[i]));
	vector<int> anws;
	cin >> q;
	sort(zap.begin(), zap.end());
	for (int i = 0; i < q; i++) {
		cin >> niz;
		cin >> ver;
		cin >> ge;
		low = 0;
		high = n - 1;
		while (low <= high) {
			mid = (high + low) / 2;
			if (ge == zap[mid].first && zap[mid].second <= ver && zap[mid].second >= niz) {
				count = 1;
				break;
			}
			else if (ge > zap[mid].first)
				low = mid + 1;
			else if (ge < zap[mid].first)
				high = mid - 1;
			else if (niz > zap[mid].second)
				low = mid + 1;
			else if (ver < zap[mid].second)
				high = mid - 1;
		}
		if (count == 1)
			anws.push_back(count);
		else
			anws.push_back(count);
		count = 0;
	}
	for (int i = 0; i < q; i++)
		cout << anws[i];

}