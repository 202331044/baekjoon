#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int a{}, b{}, c{};
	cin >> a >> b >> c;

	int total = a + b + c;
	int maxVal = max({ a, b, c });

	if (total - maxVal > maxVal) cout << total << "\n";
	else cout << (total - maxVal) + (total - maxVal - 1) << "\n";

	return 0;
}
