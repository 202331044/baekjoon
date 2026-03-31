#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	int i;

	cin >> str >> i;
	cout << str[i-1] << "\n";

	return 0;
}
