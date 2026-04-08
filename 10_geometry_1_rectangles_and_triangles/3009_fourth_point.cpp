#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	//vector<pair<int, int>> points(3);

	//for (int i = 0; i < 3; ++i)
	//	cin >> points[i].first >> points[i].second;

	//int x{ points[0].first }, y{ points[0].second };

	//if (x == points[1].first) x = points[2].first;
	//else if (x == points[2].first) x = points[1].first;

	//if (y == points[1].second) y = points[2].second;
	//else if (y == points[2].second) y = points[1].second;


	int x{}, y{};
	for (int i = 0; i < 3; ++i)
	{
		int a{}, b{};
		cin >> a >> b;
		x ^= a;
		y ^= b;
	}

	cout << x << " " << y << "\n";

	return 0;
}
