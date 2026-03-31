#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int t{};
	cin >> t;

	while(t--)
	{
		int r{};
		string s;
		cin >> r >> s;

		string str;
		str.reserve(s.size() * r);

		for (char ch : s)
		{
			for (int i = 0; i < r; ++i)
				str += ch;
		}

		cout << str << "\n";
	}
	
	return 0;
}
