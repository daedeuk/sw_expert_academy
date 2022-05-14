#include<iostream>

using namespace std;
int N;
int result_count;
int arr[11];

bool isOK(int _checkcount)
{
	for (int j = 0; j < _checkcount; j++)
	{
		if (arr[j] == arr[_checkcount] || (abs(arr[_checkcount] - arr[j]) == _checkcount - j))
		{
			return false;
		}
	}
	return true;
}

void N_Queen(int _count)
{
	if (_count == N)
	{
		result_count++;
		return;
	}
	else {
		for (int i = 0; i < N; i++)
		{
			arr[_count] = i;
			if (isOK(_count))
			{
				N_Queen(_count + 1);
			}
		}
	}
}
int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> N;
		result_count = 0;
		N_Queen(0);
		cout << "#" << test_case << " " << result_count << endl;
	}
	return 0;
}