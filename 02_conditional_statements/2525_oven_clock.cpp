#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int h = c / 60, m = c % 60;

	b += m;
	a += h;

	if (b >= 60)
	{
		a += 1;
		b = b % 60;
	}
	if (a >= 24) a = a % 24;

	cout << a << " " << b;
	return 0;
}
