#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	long long n{}, cnt{};
	cin >> n;

	//for (long long i = n - 2; i > 0; --i)
	//	cnt += (i + 1) * i / 2;

	//cout << cnt << "\n";

	cout << n * (n - 1) * (n - 2) / 6 << "\n";
	cout << 3 << "\n";

	return 0;
}
