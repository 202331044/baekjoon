#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int x{}, y{}, w{}, h{};
	cin >> x >> y >> w >> h;
	
	int minDist = min({ x, w - x, y, h - y });
	cout << minDist << "\n";

	return 0;
}
