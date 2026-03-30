#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n{}, m{};
	cin >> n >> m;

	vector<int> vec(n);
	/*for (int k = 1; k <= n; ++k)
		vec[k - 1] = k;*/

	iota(vec.begin(), vec.end(), 1);

	while (m--)
	{
		int i{}, j{};
		cin >> i >> j;
		swap(vec[i - 1], vec[j - 1]);
	}

	for (int x : vec) cout << x << " ";

	return 0;
}
