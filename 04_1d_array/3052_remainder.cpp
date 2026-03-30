#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(42);
	for (int i = 0; i < 10; ++i)
	{
		int num{};
		cin >> num;

		vec[num % 42]++;
	}

	int total{};
	for (int x : vec) if (x != 0) total++;

	cout << total << "\n";

	return 0;
}
