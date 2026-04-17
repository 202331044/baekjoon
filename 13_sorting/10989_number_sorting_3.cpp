#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> count(10001);

	int n{}, num{};
	cin >> n;

	while (n--)
	{
		cin >> num;
		count[num]++;
	}

	for (int i = 1; i <= 10000; ++i)
	{
		for(int j = 0; j < count[i]; ++j)
			cout << i << '\n';
	}

	return 0;
}
