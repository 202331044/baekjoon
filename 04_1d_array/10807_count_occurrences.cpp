#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n{}, v{};
	cin >> n;

	int* arr = new int[n] {};
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	cin >> v;

	int sum{};
	for (int i = 0; i < n; ++i)
		if (arr[i] == v) sum++;

	cout << sum;

	delete[] arr;

	return 0;
}
