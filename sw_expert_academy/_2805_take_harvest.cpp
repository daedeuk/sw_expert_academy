#include<iostream>

using namespace std;

int N;
int matrix[50][50];

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> N;
		int result = 0;
		for (int a_line = 0; a_line < N; a_line++)
		{
			string s_input;
			cin >> s_input;
			for (int c_line = 0; c_line < s_input.length(); c_line++)
			{
				matrix[a_line][c_line] = s_input[c_line] - 48;
			}
		}
		//항상 홀수 이므로 0 ~ n-1 중점은 (n-1)/2
		int number_of_column = -1;
		int center_of_N = (N - 1) / 2;
		for (int a_line = 0; a_line <= (N - 1) / 2; a_line++)
		{
			number_of_column += 1;
			for (int column_index = center_of_N - number_of_column; column_index <= center_of_N + number_of_column; column_index++)
			{
				result += matrix[a_line][column_index];
			}
		}

		for (int a_line = (N - 1) / 2 + 1; a_line < N; a_line++)
		{
			number_of_column -= 1;
			for (int column_index = center_of_N - number_of_column; column_index <= center_of_N + number_of_column; column_index++)
			{
				result += matrix[a_line][column_index];
			}
		}
		cout << "#" << test_case << " " << result << '\n';
	}
	return 0;
}