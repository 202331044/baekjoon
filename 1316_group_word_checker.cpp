#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	int n{}, result{};
	cin >> n;

	while (n--)
	{
		string str;
		cin >> str;

		bool isGroup = true;
		char prev = str[0];
		set<char> s = {prev};

		for (int i = 1; i < str.size(); ++i)
		{
			if (prev != str[i])
			{
				if (s.count(str[i]))
				{
					isGroup = false;
					break;
				}
				else
				{
					s.insert(str[i]);
					prev = str[i];
				}	
			}
			else
				prev = str[i];
		}

		if (isGroup) result++;
	}

	cout << result << "\n";

	return 0;
}
