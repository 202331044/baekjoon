#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int maxVal{}, r{}, c{};

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			int num{};
			cin >> num;
			if (maxVal < num)
			{
				maxVal = num;
				r = i;
				c = j;
			}
		}
	}

	cout << maxVal << "\n";
	cout << r + 1 << " " << c + 1 << "\n";

	return 0;
}
