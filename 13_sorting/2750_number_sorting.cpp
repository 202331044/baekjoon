#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void insertSort(vector<int>& vec)
{
	for (int i = 1; i < vec.size(); ++i)
	{
		int key = vec[i];
		int j = i - 1;

		while (j >= 0 && key < vec[j])
		{
			vec[j + 1] = vec[j];
			j--;
		}	
		vec[j+1] = key;
	}
}

void bubbleSort(vector<int>& vec)
{
	int n = vec.size() - 1;

	while (n > 0)
	{
		bool swapped = false;

		for (int j = 0; j < n; ++j)
		{
			if (vec[j] > vec[j + 1])
			{
				swap(vec[j], vec[j + 1]);
				swapped = true;
			}
		}

		if (!swapped) return;
		n--;
	}
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n{};
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	//sort(vec.begin(), vec.end());
	//insertSort(vec);

	bubbleSort(vec);

	for (auto num : vec) cout << num << "\n";
	
	return 0;
}
