#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	//vector<int> vec(str.size());
	//for (int i = 0; i < str.size(); ++i)
	//	vec[i] = str[i] - '0';

	//sort(vec.begin(), vec.end(), greater<int>());

	//for (auto n : vec) cout << n;

	sort(str.begin(), str.end(), greater<int>());
	for (auto c : str) cout << c;

	return 0;
}
