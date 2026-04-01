#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<int> vec = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; ++i)
	{
		int num{};
		cin >> num;
		cout << vec[i] - num << " ";
	}

	return 0;
}
