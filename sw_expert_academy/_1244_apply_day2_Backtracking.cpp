#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
string num;
int change_count;
int answer;

void dfs(int index, int change)
{
	if (change == change_count) {
		answer = max(answer, stoi(num));
		return;
	}
	else {
		for (int i = index; i < num.length(); i++)
		{
			for (int j = i + 1; j < num.length(); j++)
			{
				if (num[j] >= num[i]) {
					swap(num[i], num[j]);
					dfs(i, change + 1);
					swap(num[i], num[j]);
				}
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
		cin >> num >> change_count;
		answer = 0;
		dfs(0, 0);
		cout << "#" << test_case <<" " << answer << '\n';
	}
	return 0;
}