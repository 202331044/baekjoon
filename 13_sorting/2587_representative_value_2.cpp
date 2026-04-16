#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int sum = 0;
	vector<int> vec(5);

	for (int i = 0; i < 5; ++i)
	{
		cin >> vec[i];
		sum += vec[i];
	}

	sort(vec.begin(), vec.end());

	cout << sum / 5 << "\n";
	cout << vec[2] << "\n";

	return 0;
}
