#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{}, k{}, count{};
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0) count++;

		if (count == k)
		{
			cout << i << "\n";
			return 0;
		}
	}
	
	cout << 0 << "\n";

	return 0;
}
