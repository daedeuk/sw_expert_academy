#include<iostream>

using namespace std;

int matrix[101][101];

bool isGoN(int a_matrix, int c_matrix, int n_line)
{
	bool result = true;
	for (int check_a = a_matrix+1; check_a <= n_line; check_a++)
	{
		if (matrix[check_a][c_matrix] == 2)
		{
			result = false;
			return result;
		}

		if (matrix[check_a][c_matrix] == 1) //빨간색이 여러개 붙어 있을 경우 하나의 빨간색으로
		{
			matrix[a_matrix][c_matrix] = 0;
			return false;
		}
	}
	return result;
}

bool isGoS(int a_matrix, int c_matrix)
{
	bool result = true;
	for (int check_a = a_matrix-1; check_a >= 1; check_a--)
	{
		if (matrix[check_a][c_matrix] == 1)
		{
			result = false;
			return result;
		}

		if (matrix[check_a][c_matrix] == 2) //파란색이 여러개 붙어 있을 경우 하나의 파란색으로
		{
			matrix[a_matrix][c_matrix] = 0;
			return false;
		}
	}
	return result;
}

int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= 10; test_case++)
	{
		int N_line;
		cin >> N_line;
		for (int array_matrix = 1; array_matrix <= N_line; array_matrix++)
		{
			for (int column_matrix = 1; column_matrix <= N_line; column_matrix++)
			{
				int input_index;
				cin >> input_index;
				matrix[array_matrix][column_matrix] = input_index;
			}
		}
		//입력 끝

		//결국 따지는 건 상, 하 (height이자 array)
		int count_result_N=0, count_result_S = 0;
		for (int array_matrix = 1; array_matrix <= N_line; array_matrix++)
		{
			for (int column_matrix = 1; column_matrix <= N_line; column_matrix++)
			{
				if (matrix[array_matrix][column_matrix] == 1)
				{
					if (isGoN(array_matrix, column_matrix, N_line))
					{
						matrix[array_matrix][column_matrix] = 0;
					}
				}
				if (matrix[array_matrix][column_matrix] == 2)
				{
					if (isGoS(array_matrix, column_matrix))
					{
						matrix[array_matrix][column_matrix] = 0;
					}
				}
			}
		}

		for (int array_matrix = 1; array_matrix <= N_line; array_matrix++)
		{
			for (int column_matrix = 1; column_matrix <= N_line; column_matrix++)
			{
				if (matrix[array_matrix][column_matrix] == 1)
				{
					count_result_N++;
				}
				if (matrix[array_matrix][column_matrix] == 2)
				{
					count_result_S++;
				}
			}
		}
		cout << "#" << test_case << " " << count_result_N << endl;

	}
	return 0;
}