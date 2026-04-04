#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<string> vec(5);

	int maxlen{};
	for (int i = 0; i < 5; ++i)
	{
		cin >> vec[i];
		maxlen = max(maxlen, static_cast<int>(vec[i].size()));
	}
		
	for (int c = 0; c < maxlen; ++c)
	{
		for (int r = 0; r < 5; ++r)
		{
			if (c >= vec[r].size()) continue;
			cout << vec[r][c];
		}
	}

	return 0;
}
