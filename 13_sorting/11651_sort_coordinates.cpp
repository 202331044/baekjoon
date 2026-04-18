#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	vector<pair<int, int>> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i].first >> vec[i].second;

	//sort(vec.begin(), vec.end(), cmp);

	sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
		if (a.second == b.second) return a.first < b.first;
		return a.second < b.second;
		});

	for (const auto& num: vec) cout << num.first << " " << num.second << '\n';

	return 0;
}
