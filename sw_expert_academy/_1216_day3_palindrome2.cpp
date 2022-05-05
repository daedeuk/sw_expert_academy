#include<iostream>

using namespace std;

char matrix[101][101];
bool find_palindrome_width(int a_matrix, int c_matrix, int f_length)
{
	bool result = true;
	if (c_matrix + f_length - 1 > 100)
	{
		return false;
	}
	for (int width = 0; width <= f_length / 2; width++)
	{
		if (matrix[a_matrix][c_matrix +width] != matrix[a_matrix][c_matrix + f_length - 1 - width])
		{
			return false;
		}
	}
	return result;
}
bool find_palindrome_height(int a_matrix, int c_matrix, int length)
{
	bool result = true;
	if (a_matrix + length - 1 > 100)
	{
		return false;
	}
	for (int height = 0; height <= length / 2; height++)
	{
		if (matrix[a_matrix+height][c_matrix] != matrix[a_matrix + length - 1 - height][c_matrix])
		{
			return false;
		}
	}
	return result;
}
int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		int test_number;
		cin >> test_number;

		for (int m_line = 1; m_line <= 100; m_line++)
		{
			string input_string;
			cin >> input_string;
			for (int m_input = 0; m_input < input_string.length(); m_input++)
			{
				matrix[m_line][m_input + 1] = input_string[m_input];
			}
		}
		
		int max_length = 0;
		for (int p_length = 100; p_length >= 1; p_length--)
		{
			for (int array_matrix = 1; array_matrix <= 100; array_matrix++)
			{
				for (int column_matrix = 1; column_matrix <= 100; column_matrix++)
				{
					if (find_palindrome_width(array_matrix, column_matrix, p_length))
					{
						if (max_length < p_length)
						{
							max_length = p_length;
						}
					}
					if (find_palindrome_height(array_matrix, column_matrix, p_length))
					{
						if (max_length < p_length)
						{
							max_length = p_length;
						}
					}
				}
			}
			if (max_length > 0)
			{
				break;
			}
		}
		
		cout << "#" << test_case << " " << max_length << endl;
	}
	return 0;
}