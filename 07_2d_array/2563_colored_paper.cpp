#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<vector<int>> vec(100, vector<int>(100, 0));

	int n{};
	cin >> n;

	while (n--)
	{
		int x{}, y{};
		cin >> x >> y;

		for (int r = x; r < x + 10; ++r)
			for (int c = y; c < y + 10; ++c)
				vec[r][c] = 1;
	}

	int total{};
	for (int i = 0; i < 100; ++i)
		for (int j = 0; j < 100; ++j)
			if (vec[i][j] == 1) total++;

	cout << total << "\n";

	return 0;
}
