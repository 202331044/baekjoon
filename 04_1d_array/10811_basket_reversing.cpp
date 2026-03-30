#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	int n{}, m{};
	cin >> n >> m;

	vector<int> vec(n);
	iota(vec.begin(), vec.end(), 1);

	while (m--)
	{
		int i{}, j{};
		cin >> i >> j;

		//while (i < j)
		//{
		//	swap(vec[i - 1], vec[j - 1]);
		//	i++, j--;
		//}

		reverse(vec.begin() + i - 1, vec.begin() + j);
	}

	for (int x : vec) cout << x << " ";

	return 0;
}
