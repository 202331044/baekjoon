#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n{}, b{};
	cin >> n >> b;

	string result;
	while (n != 0)
	{
		int rem = n % b;
		n /= b;

		if (rem >= 10)
			result += static_cast<char>(rem - 10 + 'A');
		else 
			result += static_cast<char>(rem + '0');
	}

	reverse(result.begin(), result.end());
	cout << result << "\n";

	return 0;
}
