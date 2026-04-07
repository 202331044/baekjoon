#include <iostream>
#include <vector>

using namespace std;

const int MAX{ 1000 };

void solution1(vector<bool>& isPrime)
{
	for (int i = 2; i < MAX + 1; ++i)
	{
		for (int j = 2; j * j < i + 1; ++j)
		{
			if (i % j == 0)
			{
				isPrime[i] = false;
				break;
			}
		}
	}
}

void solution2(vector<bool>& isPrime)
{
	for (int i = 2; i * i < MAX + 1; ++i)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j < MAX + 1; j += i)
				isPrime[j] = false;
		}
	}
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<bool> isPrime(MAX+1, true);
	isPrime[0] = isPrime[1] = false;

	solution2(isPrime);

	int n{}, cnt{};
	cin >> n;

	while (n--)
	{
		int num{};
		cin >> num;
		if (isPrime[num]) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
