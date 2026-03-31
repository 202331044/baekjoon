#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	//if (stoi(a) > stoi(b)) cout << a << "\n";
	if (a > b) cout << a << "\n";
	else cout << b << "\n";
	
	return 0;
}
