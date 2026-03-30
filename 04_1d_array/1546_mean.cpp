#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	//auto it = max_element(vec.begin(), vec.end());

	//double mean{};
	//for (int score : vec)
	//	mean += (double)score / *it * 100;

	//cout << fixed;
	//cout.precision(14);

	int max_score = *max_element(vec.begin(), vec.end());

	double mean{};
	for (int score : vec)
		mean += static_cast<double>(score) / max_score * 100;

	cout << fixed;
	cout.precision(2);
	cout << mean / n << "\n";

	return 0;
}
