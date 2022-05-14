#include<iostream>
#include<vector>
using namespace std;

int N, K;
int result_count;
vector<int> v_input;

void dfs(int _sum, int _index)
{
	_sum += v_input[_index];
	if (_sum > K)
	{
		return;
	}
	if (_sum == K)
	{
		result_count++;
		return;
	}
	for (int j = _index+1; j < v_input.size(); j++)
	{
		dfs(_sum, j);
	}
}

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> N >> K;
		v_input.clear();
		result_count = 0;

		for (int n_input = 0; n_input < N; n_input++)
		{
			int x_input;
			cin >> x_input;
			v_input.push_back(x_input);
		}
		
		int sum = 0;
		for (int i = 0; i < v_input.size(); i++)
		{
			dfs(sum,i);
		}
		cout << "#" << test_case << " " << result_count << '\n';

	}
	return 0;
}