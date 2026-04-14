#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{}, m{};
	cin >> n >> m;

	vector<vector<char>> vec(n, vector<char>(m));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			cin >> vec[i][j];
	}


	int result{ n*m };

	for (int i = 0; i <= n - 8; ++i)
	{
		for (int j = 0; j <= m - 8; ++j)
		{
			int startB{}, startW{};
			for (int r = i; r < i + 8; ++r)
			{
				for (int c = j; c < j + 8; ++c)
				{
					if ((r + c) % 2 == 0)
					{
						if (vec[r][c] == 'B') startW++;
						else startB++;
					}
					else
					{
						if (vec[r][c] == 'W') startW++;
						else startB++;
					}
				}
			}
			result = min({ result, startB, startW });
		}
	}

	cout << result << "\n";
	return 0;
}
