#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	getline(cin, str);

	istringstream iss(str);
	string word;
	int count{};
	while (iss >> word) count++;

	cout << count << "\n";
	
	return 0;
}
