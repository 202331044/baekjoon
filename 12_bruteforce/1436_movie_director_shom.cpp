#include <iostream>
#include <string>

using namespace std;

void solution1(const int& n)
{
	int num{ 666 }, cnt{};

	while (true)
	{
		string str = to_string(num);
		int idx = str.find("666");

		if (idx != string::npos) cnt++;
		num++;

		if (cnt == n)
		{
			cout << str << "\n";
			return;
		}
	}
}

void solution2(const int& n)
{
	int num{}, cnt{};

	while (true)
	{
		int sixCnt{};
		int tmp = num;

		while (tmp % 10 == 6)
		{
			sixCnt++;
			tmp /= 10;
		}

		if (sixCnt == 0)
		{
			cnt++;
			if (cnt == n)
			{
				cout << num * 1000 + 666 << "\n";
				return;
			}
		}
		else
		{
			int start{}, range{ 1 };
			while (sixCnt--)
			{
				start += 6 * range;
				range *= 10;
			}


			for (int i = -start; i < range - start; ++i)
			{
				cnt++;
				if (cnt == n)
				{
					cout << num * 1000 + 666 + i << "\n";
					return;
				}
			}
		}
		num++;
	}
}

void solution3(const int& n)
{
	int num{ 666 }, cnt{};

	while (cnt < n)
	{
		int tmp = num;
		int sixCnt{};
		while (tmp > 0 && sixCnt < 3)
		{
			if (tmp % 10 == 6) sixCnt++;
			else sixCnt = 0;
			tmp /= 10;
		}

		if (sixCnt == 3) cnt++;
		num++;
	}

	cout << num - 1 << "\n";
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	solution3(n);
	
	return 0;
}
