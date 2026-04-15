#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	int i = n / 5;
	while (i >= 0)
	{
		int rem = n - (i * 5);
		if (rem % 3 == 0)
		{
			cout << i + rem / 3 << "\n";
			return 0;
		}
		i--;
	}

	cout << -1 << "\n";

	return 0;
}
