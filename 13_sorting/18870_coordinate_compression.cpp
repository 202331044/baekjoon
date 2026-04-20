#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	//vector<int> vec(n);
	//vector<int> order(n);
	//unordered_map<int, int> m;

	//for (int i = 0; i < n; ++i)
	//{
	//	cin >> vec[i];
	//	order[i] = vec[i];
	//}
	//	
	//sort(order.begin(), order.end());

	//int idx = 0;
	//for (auto node : order)
	//	if (m.count(node) == 0) m[node] = idx++;

	//for (auto v : vec)
	//	cout << m[v] << ' ';

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	vector<int> order = vec;
	sort(order.begin(), order.end());
	order.erase(unique(order.begin(), order.end()), order.end());

	for (auto v : vec)
		cout << lower_bound(order.begin(), order.end(), v) - order.begin() << ' ';

	return 0;
}
