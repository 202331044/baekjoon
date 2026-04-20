#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;
	
	vector<pair<int, string>> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i].first >> vec[i].second;

	stable_sort(vec.begin(), vec.end(), [](const pair<int, string>& a, const pair<int, string>& b)
		{
			return a.first < b.first;
		});

	for (auto v : vec) cout << v.first << " " << v.second << '\n';

	return 0;
}
