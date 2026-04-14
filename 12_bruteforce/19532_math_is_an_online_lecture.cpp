#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int a{}, b{}, c{}, d{}, e{}, f{};
	cin >> a >> b >> c >> d >> e >> f;

	//for (int x = -999; x <= 999; ++x)
	//{
	//	for (int y = -999; y <= 999; ++y)
	//	{
	//		if (a * x + b * y == c && d * x + e * y == f)
	//		{
	//			cout << x << " " << y << "\n";
	//			return 0;
	//		}
	//	}
	//}

	int x = (c * e - b * f) / (a * e - b * d);
	int y = (a * f - c * d) / (a * e - b * d);

	cout << x << " " << y << "\n";

	return 0;
}
