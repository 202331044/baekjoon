#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n{};
	cin >> n;

	//for (int i = 1; i < n; ++i)
	//{
	//	int sum{};
	//	string str = to_string(i);

	//	for (int j = 0; j < str.size(); ++j)
	//		sum += str[j] - '0';

	//	if (sum + i == n)
	//	{
	//		cout << str << "\n";
	//		return 0;
	//	}
	//}

	for (int i = 1; i < n; ++i)
	{

		int sum{ i }, tmp{ i };
		while (tmp != 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == n)
		{
			cout << i << "\n";
			return 0;
		}
	}
	
	cout << 0 << "\n";

	return 0;
}
