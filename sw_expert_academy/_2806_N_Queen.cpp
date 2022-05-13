#include<iostream>
using namespace std;

int N;
int result_count;
int arr[11];

/*
void N_Queen(int _n)
{
	for (int i = 1; i <= _n; i++)
	{

	}
}
*/
bool check(int _checknumber)
{
	for (int i = 0; i < _checknumber; i++)
	{
		if (arr[i] == arr[_checknumber] || abs(arr[_checknumber] - arr[i]) == _checknumber - i)
		{
			return false;
		}
	}
	return true;
}

void dfs(int _count)
{
	if (_count == N)
	{
		result_count++;
		return;
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			arr[_count] = i;
			if (check(_count))
			{
				dfs(_count + 1);
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
		//N_Queen(N);
		dfs(0);
		cout << "#" <<test_case<<" "<<result_count << endl;
	}
	return 0;
}