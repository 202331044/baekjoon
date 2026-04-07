#include <iostream>

using namespace std;

void solution1(int &n)
{
	int i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
			cout << i << "\n";
		}
		else
			i++;
	}
}

void solution2(int & n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		while (n % i == 0)
		{
			n /= i;
			cout << i << "\n";
		}
	}

	if (n != 1) cout << n << "\n";
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	solution2(n);

	return 0;
}
