#include<iostream>
#include<vector>
using namespace std;

int N, M;
bool checked[11];
vector<int> node[11];

int MaxCount;

void dfs(int _start, int _count)
{
	if (checked[_start] == true)
	{
		return;
	}
	checked[_start] = true;
	_count++;

	if (_count > MaxCount)
	{
		MaxCount = _count;
	}
	for (int i = 0; i < node[_start].size(); i++)
	{
		int close_index = node[_start][i];
		if (checked[close_index] == false)
		{
			dfs(close_index, _count);
			checked[close_index] = false;
		}
	}

}

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> N >> M;
		for (int i = 0; i < 11; i++)
		{
			node[i].clear();
		}
		int result_count = 0;
		MaxCount = 1;
		for (int m_input = 0; m_input < M; m_input++)
		{
			int x, y;
			cin >> x >> y;
			node[x].push_back(y);
			node[y].push_back(x);
		}
		for (int n1 = 1; n1 <= N; n1++)
		{
			if (node[n1].empty())
			{
				continue;
			}
			dfs(n1, result_count);
			checked[n1] = false;
		}
		cout << "#" << test_case << " " << MaxCount << '\n';
	}
	return 0;
}