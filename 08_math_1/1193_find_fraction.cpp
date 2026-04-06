#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int i{ 1 }, sum{ 1 };
	while (sum < n)
	{
		i++;
		sum += i;
	}

	//int a{ 1 }, b{ i };
	//while (sum != n)
	//{
	//	sum--;
	//	a++;
	//	b--;
	//}

	int a{ 1 + (sum - n) };
	int b{ i - (sum - n) };

	if (i % 2 == 0) cout << b << "/" << a << "\n";
	else cout << a << "/" << b << "\n";

	return 0;
}
