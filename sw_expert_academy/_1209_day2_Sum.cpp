#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int matrix[101][101];
int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		vector<int> sum;
		for (int a_matrix = 1; a_matrix <= 100; a_matrix++)
		{
			for (int c_matrix = 1; c_matrix <= 100; c_matrix++)
			{
				int index = 0;
				cin >> index;
				matrix[a_matrix][c_matrix] = index;
			}
		}
		//�밢��(diagonal) 1 LeftTop to RightBottom ���(x,x)�� ��
		int diagonal_1_sum = 0;
		for (int diagonal_1 = 1; diagonal_1 <= 100; diagonal_1++)
		{
			diagonal_1_sum += matrix[diagonal_1][diagonal_1];
		}
		sum.push_back(diagonal_1_sum);
		//�밢�� 2 RightTop to LeftBottom 1,100 -> 100,1
		int diagonal_2_sum = 0;
		for (int diagonal_2 = 1; diagonal_2 <= 100; diagonal_2++)
		{
			diagonal_2_sum += matrix[diagonal_2][101-diagonal_2];
		}
		sum.push_back(diagonal_2_sum);
		//���� ��
		for (int c_matrix = 1; c_matrix <= 100; c_matrix++)
		{
			int array_sum = 0;
			for (int a_matrix = 1; a_matrix <= 100; a_matrix++)
			{
				array_sum += matrix[a_matrix][c_matrix];
			}
			sum.push_back(array_sum);
		}
		//���� ��
		for (int a_matrix = 1; a_matrix <= 100; a_matrix++)
		{
			int column_sum = 0;
			for (int c_matrix = 1; c_matrix <= 100; c_matrix++)
			{
				column_sum += matrix[a_matrix][c_matrix];
			}
			sum.push_back(column_sum);
		}
		int max_value = *max_element(sum.begin(), sum.end());
		cout << "#" << test_case << " " << max_value << endl;
	}
	return 0;
}