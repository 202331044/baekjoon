#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int a1{}, a0{};
	int c{}, n0{};

	cin >> a1 >> a0;
	cin >> c >> n0;
	
	if ((c - a1) * n0 >= a0 && (c - a1) >= 0) cout << 1 << "\n";
	else cout << 0 << "\n";

	return 0;
}
