#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	const int MAX = 100000;

	int n{};
	cin >> n;

	int minX{ MAX }, maxX{-MAX};
	int minY{ MAX }, maxY{ -MAX };

	while (n--)
	{
		int x{}, y{};
		cin >> x >> y;
		if (minX > x) minX = x;
		if (minY > y) minY = y;
		if (maxX < x) maxX = x;
		if (maxY < y) maxY = y;
	}

	cout << (maxX - minX) * (maxY - minY) << "\n";

	return 0;
}
