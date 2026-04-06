#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int i{1}, num{ 1 };
	while (num < n)
	{
		num += (6*i);
		i++;
	}

	cout << i << "\n";

	return 0;
}
