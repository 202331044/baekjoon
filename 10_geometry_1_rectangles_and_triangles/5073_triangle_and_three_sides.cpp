#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	while (true)
	{
		int a{}, b{}, c{};
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) break;

		//int maxVal = max({ a, b, c });

		//if ((a + b + c) - maxVal <= maxVal) cout << "Invalid" << "\n";

		if(a + b <= c || a + c <= b || b + c <= a) cout << "Invalid" << "\n";
		else if (a == b && b == c) cout << "Equilateral" << "\n";
		else if (a == b || a == c || b == c) cout << "Isosceles" << "\n";
		else cout << "Scalene" << "\n";
	}

	return 0;
}
