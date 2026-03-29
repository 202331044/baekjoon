#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n{}, x{};
	cin >> n >> x;

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];
		
	for (int j = 0; j < n; ++j)
		if (vec[j] < x) cout << vec[j] << " ";

	return 0;
}
