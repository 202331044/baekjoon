#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	int total{};
	for (char ch : str)
	{
		if (ch >= 'A' && ch <= 'C') total += 3;
		else if (ch >= 'D' && ch <= 'F') total += 4;
		else if (ch >= 'G' && ch <= 'I') total += 5;
		else if (ch >= 'J' && ch <= 'L') total += 6;
		else if (ch >= 'M' && ch <= 'O') total += 7;
		else if (ch >= 'P' && ch <= 'S') total += 8;
		else if (ch >= 'T' && ch <= 'V') total += 9;
		else if (ch >= 'W' && ch <= 'Z') total += 10;

	}
	
	cout << total << "\n";

	return 0;
}
