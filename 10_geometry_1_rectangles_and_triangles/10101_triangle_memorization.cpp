#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int a{}, b{}, c{};
	cin >> a >> b >> c;

	if (a + b + c != 180) cout << "Error" << "\n";
	else if (a == b && b == c) cout << "Equilateral" << "\n";
	else if (a == b || a == c || b == c) cout << "Isosceles" << "\n";
	else cout << "Scalene" << "\n";

	return 0;
}
