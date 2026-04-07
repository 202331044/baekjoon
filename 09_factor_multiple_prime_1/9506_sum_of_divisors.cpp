#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	while(true)
	{
		int n{};
		cin >> n;

		if (n == -1) break;

		int maxNum = sqrt(n);
		int sum{1};
		vector<int> vec(1, 1);

		for (int i = 2; i <= maxNum; ++i)
		{
			if (n % i == 0)
			{
				vec.push_back(i);
				sum += i;
				if (n % i != i)
				{
					vec.push_back(n / i);
					sum += (n / i);
				}
			}		
		}

		if (sum != n) cout << n << " is NOT perfect." << "\n";
		else
		{
			sort(vec.begin(), vec.end());

			cout << n << " = ";
			for (int i = 0; i < vec.size() - 1; ++i)
				cout << vec[i] << " + ";
			cout << vec[vec.size() - 1] << "\n";
		}	
	}

	return 0;
}
