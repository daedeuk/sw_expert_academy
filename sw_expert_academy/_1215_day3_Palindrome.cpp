#include<iostream>

using namespace std;

char matrix[9][9];

bool find_palindrome_width(int a_matrix, int c_matrix, int f_length)
{
	bool result = true;
	if (c_matrix + f_length-1 > 8)
	{
		return false;
	}
	for (int width = 0; width <=f_length/2; width++)
	{
		if (matrix[a_matrix][c_matrix + width] != matrix[a_matrix][c_matrix + f_length - 1 - width])
		{
			result = false;
		}
	}
	return result;
}
bool find_palindrome_height(int a_matrix, int c_matrix, int f_length)
{
	bool result = true;
	if (a_matrix + f_length-1 > 8)
	{
		return false;
	}
	for (int height = 0; height <= f_length / 2; height++)
	{
		if (matrix[a_matrix+height][c_matrix] != matrix[a_matrix+f_length-1-height][c_matrix])
		{
			result = false;
		}
	}
	return result;
}
int main()
{
	int T=10;
	for (int test_case = 1; test_case <= 10; test_case++)
	{
		int find_length;
		cin >> find_length;
		for (int matrix_length = 1; matrix_length <= 8; matrix_length++)
		{
			string input_string;
			cin >> input_string;
			for (int input = 0; input < input_string.length(); input++)
			{
				matrix[matrix_length][input + 1] = input_string[input];
			}
		}
		//find ½ÃÀÛ
		int find_sum = 0;
		for (int array_matrix = 1; array_matrix <= 8; array_matrix++)
		{
			for (int column_matrix = 1; column_matrix <= 8; column_matrix++)
			{
				find_sum+=find_palindrome_width(array_matrix, column_matrix, find_length);
				find_sum+=find_palindrome_height(array_matrix, column_matrix, find_length);
			}
		}
		cout << "#" << test_case << " " << find_sum << endl;
	}
	return 0;
}