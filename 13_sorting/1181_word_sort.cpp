#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	//unordered_set<string> s;
	//for (int i = 0; i < n; ++i)
	//{
	//	string str;
	//	cin >> str;
	//	s.insert(str);
	//}

	//vector<string> vec(s.begin(), s.end());
	//sort(vec.begin(), vec.end(), [](const string& a, const string& b)
	//	{
	//		if (a.size() == b.size()) return a < b;
	//		return a.size() < b.size();
	//	});

	vector<string> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	sort(vec.begin(), vec.end(), [](const string& a, const string& b)
		{
			if (a.size() == b.size()) return a < b;
			return a.size() < b.size();
		});

	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (auto v : vec) cout << v << '\n';

	return 0;
}
