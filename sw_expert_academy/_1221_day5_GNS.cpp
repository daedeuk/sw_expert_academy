#include<iostream>

using namespace std;

string matrix[10] = { "ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN" };

int main()
{
	int T;
	cin >> T;
	for(int test_case=1;test_case<=T;test_case++)
	{
		int number_count[10] = {};
		//#1을 입력받으려면 어떻게 해야할까? --> string
		string test_number;
		int number_of_test;
		cin >> test_number >> number_of_test;
		for (int input_test = 0; input_test < number_of_test; input_test++)
		{
			string input_string;
			cin >> input_string;
			if (input_string == matrix[0])
			{
				number_count[0]++;
			}
			else if (input_string == matrix[1])
			{
				number_count[1]++;
			}
			else if (input_string == matrix[2])
			{
				number_count[2]++;
			}
			else if (input_string == matrix[3])
			{
				number_count[3]++;
			}
			else if (input_string == matrix[4])
			{
				number_count[4]++;
			}
			else if (input_string == matrix[5])
			{
				number_count[5]++;
			}
			else if (input_string == matrix[6])
			{
				number_count[6]++;
			}
			else if (input_string == matrix[7])
			{
				number_count[7]++;
			}
			else if (input_string == matrix[8])
			{
				number_count[8]++;
			}
			else if (input_string == matrix[9])
			{
				number_count[9]++;
			}
		}
		cout << "#" << test_case << endl;
		for (int num = 0; num <= 9; num++)
		{
			for (int n_count = 0; n_count < number_count[num]; n_count++)
			{
				cout << matrix[num] << " ";
			}
		}
		cout << endl;
		

	}
	return 0;
}