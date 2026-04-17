#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& vec, vector<int>& tmp, int left, int mid, int right)
{
	int i{ left }, j{ mid + 1 }, pos{left};

	while (i <= mid && j <= right)
	{
		if (vec[i] <= vec[j])
			tmp[pos] = vec[i++];
		else
			tmp[pos] = vec[j++];
		pos++;
	}

	while (i <= mid)
		tmp[pos++] = vec[i++];

	while (j <= right)
		tmp[pos++] = vec[j++];
}

void mergeSort(vector<int>& vec, vector<int>& tmp, int left, int right)
{
	if (left >= right) return;

	int mid = (left + right) / 2;

	mergeSort(vec, tmp, left, mid);
	mergeSort(vec, tmp, mid + 1, right);
	merge(vec, tmp, left, mid, right);

	for (int i = left; i <= right; ++i)
		vec[i] = tmp[i];
}

int partition(vector<int>& vec, int left, int right)
{
	swap(vec[right], vec[(left + right) / 2]);
	int pivot = vec[right];
	int i = left;

	for(int j = left; j < right; ++j)
		if (vec[j] <= pivot) swap(vec[i++], vec[j]);

	swap(vec[i], vec[right]);

	return i;
}

void quickSort(vector<int>& vec, int left, int right)
{
	if (left >= right) return;

	int mid = partition(vec, left, right);
	quickSort(vec,left, mid - 1);
	quickSort(vec, mid + 1, right);
}

void heapify(vector<int>& vec, int idx, int n)
{
	int maxIdx = idx;

	int left = 2 * idx + 1;
	int right = 2 * idx + 2;

	if (left < n && vec[left] > vec[maxIdx]) maxIdx = left;
	if (right < n && vec[right] > vec[maxIdx]) maxIdx = right;

	if (maxIdx != idx)
	{
		swap(vec[maxIdx], vec[idx]);
		heapify(vec, maxIdx, n);
	}
}

void heapSort(vector<int>& vec, int n)
{

	for (int i = n / 2 - 1; i >= 0; --i)
		heapify(vec, i, n);

	for (int j = n - 1; j >= 0; --j)
	{
		swap(vec[j], vec[0]);
		heapify(vec, 0, j);
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

	//vector<int> tmp(n);
	//mergeSort(vec, tmp, 0, n - 1);

	//quickSort(vec, 0, n - 1);

	heapSort(vec, n);
	for (auto num : vec) cout << num << '\n';

	return 0;
}
