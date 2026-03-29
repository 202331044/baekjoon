#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n{}, m{};
	cin >> n >> m;

	vector<int> vec(n);
	for (int cnt = 0; cnt < m; ++cnt)
	{
		int i{}, j{}, k{};
		cin >> i >> j >> k;

		for (int idx = i - 1; idx < j; ++idx)
			vec[idx] = k;
	}

	/*for (int idx = 0; idx < n; ++idx)
		cout << vec[idx] << " ";*/

	for (int x : vec) cout << x << " ";

	return 0;
}
