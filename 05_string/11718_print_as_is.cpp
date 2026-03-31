#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	//while(1)
	//{
	//	string str;
	//	getline(cin, str);

	//	if (str.empty()) break;
	//	
	//	cout << str << "\n";
	//}
	
	string str;
	while (getline(cin, str))
		cout << str << "\n";

	return 0;
}
