#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	//int num{ 1 }, result{4};
	//for (int i = 0; i < n; ++i)
	//{
	//	result += num * num + (num + 1) * num + (num + 1) * num;
	//	num *= 2;
	//}
	
	int result = ((1 << n) + 1) * ((1 << n) + 1);
		
	cout << result << "\n";

	return 0;
}
