#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	string str;
	cin >> n >> str;

	int sum{};
	for (char ch: str)
		sum += ch - '0';

	cout << sum << "\n";

	return 0;
}
