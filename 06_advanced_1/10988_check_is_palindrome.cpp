#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;

	//string cmp = str;
	//reverse(cmp.begin(), cmp.end());

	//if (cmp == str) cout << 1 << "\n";
	//else cout << 0 << "\n";
	
	int left = 0, right = str.size() - 1;
	while (left < right)
	{
		if (str[left] != str[right])
		{
			cout << 0 << "\n";
			return 0;
		}
		left++;
		right--;
	}

	cout << 1 << "\n";

	return 0;
}
