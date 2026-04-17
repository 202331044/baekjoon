#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	vector<pair<int, int>> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i].first >> vec[i].second;
	
	sort(vec.begin(), vec.end());

	for (auto& num : vec) cout << num.first << " " << num.second << "\n";

	return 0;
}
