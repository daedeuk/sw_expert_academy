#include<iostream>
#include<vector>

using namespace std;

int p, q;
int sharp_matrix[401][401] = {};
int x, y;

int main()
{
	int r_line = 400;
	int result_count = 0;
	vector<pair<int, int>> and_matrix;
	and_matrix.push_back(make_pair(0, 0));
	for (int line_count = 2; line_count <= r_line; line_count++)
	{
		for (int x1 = 1; x1 < line_count; x1++)
		{
			int y1 = line_count - x1;
			result_count++;
			sharp_matrix[x1][y1] = result_count;
			and_matrix.push_back(make_pair(x1, y1));
		}
	}
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> p >> q;
		int result_x, result_y = 0;
		result_x = and_matrix[p].first + and_matrix[q].first;
		result_y = and_matrix[p].second + and_matrix[q].second;
		int result = sharp_matrix[result_x][result_y];
		cout << "#" << test_case << " " << result << '\n';
	}
	return 0;
}