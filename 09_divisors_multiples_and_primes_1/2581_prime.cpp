#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{}, m{};
	cin >> n >> m;

	const int MAX = 10000;
	vector<int>isPrime(MAX + 1, true);
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i * i <= MAX; ++i)
	{
		if (!isPrime[i]) continue;

		for (int j = i * i; j <= MAX; j += i)
			isPrime[j] = false;
	}

	int minVal{ -1 }, sum{ 0 };
	for (int s = n; s <= m; ++s)
	{
		if (isPrime[s])
		{
			if (minVal == -1) minVal = s;
			sum += s;
		}
	}

	if (minVal != -1)
	{
		cout << sum << "\n";
		cout << minVal << "\n";
	}
	else
		cout << minVal << "\n";

	return 0;
}
