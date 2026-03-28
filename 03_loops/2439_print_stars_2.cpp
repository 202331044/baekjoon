#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = n; i > 0; --i)
	{
		for (int j = 0; j < i - 1; ++j)
			cout << " ";
		for (int k = 0; k < (n - (i - 1)); ++k)
			cout << "*";
		cout << "\n";
	}
		
	return 0;
}
