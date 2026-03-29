#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	//auto itMin = min_element(vec.begin(), vec.end());
	//auto itMax = max_element(vec.begin(), vec.end());
	auto [itMin, itMax] = minmax_element(vec.begin(), vec.end());

	cout << *itMin << " " << *itMax << "\n";

	return 0;
}
