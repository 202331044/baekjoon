#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];
	
	int v{};
	cin >> v;

	cout << count(vec.begin(), vec.end(), v);

	return 0;
}
