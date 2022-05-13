#include<iostream>

using namespace std;

int H, W;
char matrix[21][21];
char command[101];
int N;

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> H >> W;
		int start_array = -1;
		int start_column = -1;
		char current_status = NULL;

		for (int h1 = 0; h1 < H; h1++)
		{
			string s_input;
			cin >> s_input;
			for (int w1 = 0; w1 < W; w1++)
			{
				matrix[h1][w1] = s_input[w1];
				switch (s_input[w1])
				{
				case '^':
					start_array = h1;
					start_column = w1;
					current_status = '^';
					break;
				case 'v':
					start_array = h1;
					start_column = w1;
					current_status = 'v';
					break;
				case'<':
					start_array = h1;
					start_column = w1;
					current_status = '<';
					break;
				case'>':
					start_array = h1;
					start_column = w1;
					current_status = '>';
					break;
				}
			}
		}
		cin >> N;
		int current_array = start_array;
		int current_column = start_column;
		for (int n1 = 0; n1 < N; n1++)
		{
			char c_input;
			cin >> c_input;
			command[n1] = c_input;
			switch (c_input)
			{
			case 'U':
				current_status = '^';
				if (current_array - 1 >= 0)
				{
					if (matrix[current_array - 1][current_column] == '.')
					{
						matrix[current_array][current_column] = '.';
						current_array--;
					}
				}
				matrix[current_array][current_column] = '^';
				break;
			case 'D':
				current_status = 'v';
				if (current_array + 1 < H)
				{
					if (matrix[current_array + 1][current_column] == '.')
					{
						matrix[current_array][current_column] = '.';
						current_array++;
					}
				}
				matrix[current_array][current_column] = 'v';
				break;
			case 'L':
				current_status = '<';
				if (current_column - 1 >= 0)
				{
					if (matrix[current_array][current_column - 1] == '.')
					{
						matrix[current_array][current_column] = '.';
						current_column--;
					}
				}
				matrix[current_array][current_column] = '<';
				break;
			case 'R':
				current_status = '>';
				if (current_column + 1 < W)
				{
					if (matrix[current_array][current_column + 1] == '.')
					{
						matrix[current_array][current_column] = '.';
						current_column++;
					}
				}
				matrix[current_array][current_column] = '>';
				break;
			case 'S':
				if (current_status == '<' && (current_column - 1 >= 0))
				{
					for (int c_column = current_column - 1; c_column >= 0; c_column--)
					{
						if (matrix[current_array][c_column] == '*') //벽돌이면
						{
							matrix[current_array][c_column] = '.';
							break;
						}
						if (matrix[current_array][c_column] == '#') //강철이면
						{
							break;
						}
					}
				}
				else if (current_status == '>' && (current_column + 1 < W))
				{
					for (int c_column = current_column + 1; c_column < W; c_column++)
					{
						if (matrix[current_array][c_column] == '*') //벽돌이면
						{
							matrix[current_array][c_column] = '.';
							break;
						}
						if (matrix[current_array][c_column] == '#') //강철이면
						{
							break;
						}
					}
				}
				else if (current_status == '^' && (current_array - 1) >= 0)
				{
					for (int c_array = current_array - 1; c_array >= 0; c_array--)
					{
						if (matrix[c_array][current_column] == '*') //벽돌이면
						{
							matrix[c_array][current_column] = '.';
							break;
						}
						if (matrix[c_array][current_column] == '#') //강철이면
						{
							break;
						}
					}
				}
				else if (current_status == 'v' && (current_array + 1 < H))
				{
					for (int c_array = current_array + 1; c_array < H; c_array++)
					{
						if (matrix[c_array][current_column] == '*') //벽돌이면
						{
							matrix[c_array][current_column] = '.';
							break;
						}
						if (matrix[c_array][current_column] == '#') //강철이면
						{
							break;
						}
					}
				}
				break;
			}
		}
		cout << "#" << test_case << " ";
		for (int o_array = 0; o_array < H; o_array++)
		{
			for (int o_column = 0; o_column < W; o_column++)
			{
				cout << matrix[o_array][o_column];
			}
			cout << '\n';
		}
	}
	return 0;
}