#include <iostream>

using namespace std;

int main()
{
	int x, n;
	int total = 0;
	cin >> x >> n;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		total += a * b;
	}

	if (x == total) cout << "Yes";
	else cout << "No";

	return 0;
}
