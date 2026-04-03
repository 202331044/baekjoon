#include <iostream>

using namespace std;

int main()
{
	int totalCredit= {};
	double totalScore = 0.0;

	for (int i = 0; i < 20; ++i)
	{
		string name, strScore;
		double credit{}, score{};
		cin >> name >> credit >> strScore;

		if (strScore == "P") continue;

		totalCredit += credit;

		if (strScore == "A+") score = 4.5;
		else if (strScore == "A0") score = 4.0;
		else if (strScore == "B+") score = 3.5;
		else if (strScore == "B0") score = 3.0;
		else if (strScore == "C+") score = 2.5;
		else if (strScore == "C0") score = 2.0;
		else if (strScore == "D+") score = 1.5;
		else if (strScore == "D0") score = 1.0;
		else if(strScore == "F") score = 0.0;

		totalScore += (score * credit);
	}

	cout << fixed;
	cout.precision(4);
	cout << totalScore / totalCredit << "\n";

	return 0;
}
