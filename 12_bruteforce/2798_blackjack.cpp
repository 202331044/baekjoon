#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int>& vec, int sum, int cnt, int start,  const int& m, int& result)
{
	if (cnt == 3)
	{
		if (sum > result) result = sum;
		return;
	}

	for (int i = start; i < vec.size(); ++i)
	{
		if (sum + vec[i] <= m)
			dfs(vec, sum + vec[i], cnt + 1, i + 1, m, result);
	}
}

int main()
{
	int n{}, m{}, result{};
	cin >> n >> m;
	
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	dfs(vec, 0, 0, 0, m, result);

	//for (int i = 0; i < n - 2; ++i)
	//{
	//	for (int j = i + 1; j < n - 1; ++j)
	//	{
	//		for (int k = j + 1; k < n; ++k)
	//		{
	//			int sum = vec[i] + vec[j] + vec[k];
	//			if (sum <= m && sum > result)
	//				result = sum;

	//			if (result == m)
	//			{
	//				cout << result << "\n";
	//				return 0;
	//			}
	//		}
	//	}
	//}

	cout << result << "\n";

	return 0;
}
