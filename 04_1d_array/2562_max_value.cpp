#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> vec(9);
	for (int i = 0; i < 9; ++i)
		cin >> vec[i];

	//int idx{}, maxVal{};
	//for (int j = 0; j < 9; ++j)
	//{
	//	if (vec[j] > maxVal)
	//	{
	//		maxVal = vec[j];
	//		idx = j;
	//	}
	//}

	//cout << maxVal << "\n" << idx + 1 << "\n";

	auto it = max_element(vec.begin(), vec.end());
	cout << *it << "\n" << (it - vec.begin()) + 1 << "\n";

	return 0;
}
