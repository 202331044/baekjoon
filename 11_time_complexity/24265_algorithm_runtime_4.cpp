#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	long long n{}, cnt{};
	cin >> n;

	//for (int i = 1; i < n; ++i) cnt += i;

	//cout << cnt << "\n";
	cout << n * (n - 1) / 2 << "\n";
	cout << 2 << "\n";

	return 0;
}
