#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int solution1(const string& str, int& b)
{
	int result{};
	for (int i = str.size() - 1; i >= 0; --i)
	{
		if (isdigit(str[i]))
			result += (str[i] - '0') * pow(b, str.size() - 1 - i);
		else
			result += (str[i] - 'A' + 10) * pow(b, str.size() - 1 - i);
	}

	return result;
}

int solution2(const string& str, int& b)
{
	int result{}, pow{ 1 };
	
	for (int i = str.size()-1; i >= 0; --i)
	{
		if (str[i] >= '0' && str[i] <= '9')
			result += ((str[i] - '0') * pow);
		else
			result += ((str[i] - 'A' + 10) * pow);
		pow *= b;
	}

	return result;
}

int main()
{
	int b{};
	string str;
	cin >> str >> b;

	int result = solution2(str, b);	
	cout << result << "\n";

	return 0;
}
