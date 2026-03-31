#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	//string alphabet = "abcdefghijklmnopqrstuvwxyz";
	//for (char ch : alphabet)
	//{
	//	int pos = str.find(ch);
	//	if (pos != string::npos) cout << pos << " ";
	//	else cout << -1 << " ";
	//}

	int arr[26]{};
	fill(arr, arr + 26, -1);

	for (int i = 0; i < str.size(); ++i)
	{
		int idx = str[i] - 'a';
		if (arr[idx] == -1) arr[idx] = i;
	}
	
	for (int j = 0; j < 26; ++j) cout << arr[j] << " ";

	return 0;
}
