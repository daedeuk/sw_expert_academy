#include<iostream>

using namespace std;

int matrix[5] = { 1,2,3,4,5 };
int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		int test_number;
		cin >> test_number;
		int input[8] = {};
		for (int input_case = 0; input_case < 8; input_case++)
		{
			cin >> input[input_case];
		}

		//암호화 시작
		bool is_not_zero = true;
		while (is_not_zero)
		{
			for (int e_case = 0; e_case < 5; e_case++)
			{
				input[0] = input[0] - matrix[e_case];
				if (input[0] < 0)
				{
					input[0] = 0;
				}
				int temp_input = input[0];
				for (int c_case = 0; c_case < 7; c_case++)
				{
					input[c_case] = input[c_case + 1];
				}
				input[7] = temp_input;
				if (input[7] == 0)
				{
					is_not_zero = false;
					break;
				}
			}
		}
		cout << "#" << test_number << " ";
		for (int j = 0; j < 7; j++)
		{
			cout << input[j] << " ";
		}
		cout << input[7] << endl;
	}
	return 0;
}