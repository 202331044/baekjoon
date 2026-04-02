#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	string str;
	cin >> str;

	vector<int> vec(26, 0);

	//for (int i = 0; i < str.size(); ++i)
	//{
	//	int idx{};
	//	if (str[i] >= 97) idx = str[i] - 'a';
	//	else idx = str[i] - 'A';

	//	vec[idx]++;
	//}
	
	for (char ch : str)
	{
		int idx{ toupper(ch) - 'A' };
		vec[idx]++;
	}

	int maxCnt{ vec[0] }, maxCh{ 0 };
	for (int i = 0; i < 26; ++i)
	{
		if (maxCnt < vec[i])
		{
			maxCnt = vec[i];
			maxCh = i;
		}
		else if (maxCnt == vec[i] && maxCh != i) maxCh = -1;
	}
	
	if (maxCh == -1) cout << '?' << "\n";
	else cout << static_cast<char>(maxCh + 'A') << "\n";

	return 0;
}
