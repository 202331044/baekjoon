#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<bool> vec(30, false);

	for (int i = 0; i < 28; ++i)
	{
		int idx{};
		cin >> idx;

		vec[idx - 1] = true;
	}

	for (int j = 0; j < 30; ++j)
		if (vec[j] == false) cout << j + 1 << "\n";

	return 0;
}
