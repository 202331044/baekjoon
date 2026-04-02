#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	int cnt = n;
	int space{n}, star{-1};
	while(cnt--)
	{
		space--;
		star += 2;

		for (int j = 0; j < space; ++j)
			cout << ' ';
		for (int k = 0; k < star; ++k)
			cout << '*';
		cout << "\n";
	}

	cnt = n - 1;
	while(cnt--)
	{
		space++;
		star -= 2;

		for (int j = 0; j < space; ++j)
			cout << ' ';
		for (int k = 0; k < star; ++k)
			cout << '*';
		cout << "\n";
	}

	return 0;
}
