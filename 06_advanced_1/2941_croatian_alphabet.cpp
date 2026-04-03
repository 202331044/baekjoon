#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution1(string str)
{
	vector<string> vec = { "c-", "c=", "z=", "d-", "lj", "nj", "s=" };

	int result{};
	for (int i = 0; i < str.size(); ++i)
	{
		if (i + 2 < str.size() && str.substr(i, 3) == "dz=")
		{
			result++;
			i += 2;
			continue;
		}

		for (auto cmp : vec)
		{
			if (i + 1 < str.size() && str.substr(i, 2) == cmp)
			{
				i++;
				break;
			}
		}
		result++;
	}

	return result;
}

int solution2(string str)
{
	vector<string> vec = { "dz=", "c-", "c=", "z=", "d-", "lj", "nj", "s="};

	for (auto cmp : vec)
	{
		while (str.find(cmp) != string::npos)
			str.replace(str.find(cmp), cmp.size(), "*");
	}

	return str.size();
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	//int result = solution1(str);
	int result = solution2(str);
	
	cout << result << "\n";
	
	return 0;
}
