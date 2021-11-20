#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int i, anws = 4, j;
	float n, n1, n2;
	cin >> n;
	n1 = n;
	if (sqrt(n) == round(sqrt(n))) {
		cout << 1;
		return 0;
	}
	i = sqrt(n);
	for (i; i > 0; i--) {
		n1 = n - i * i;
		if (sqrt(n1) == round(sqrt(n1))) {
			cout << 2;
			return 0;
		}
		j = sqrt(n1);
		for (j; j > 0; j--) {
			n2 = n1 - j * j;
			if (sqrt(n2) == round(sqrt(n2)))
				anws = 3;
		}
	}
	cout << anws;
}
