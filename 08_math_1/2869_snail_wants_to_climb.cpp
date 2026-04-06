#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int a{}, b{}, v{};
	cin >> a >> b >> v;

	int result  = ceil(static_cast<double>(v - a) / (a - b)) + 1;
	cout << result << "\n";

	return 0;
}
