#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		int n1;
		cin >> n1;
		vector<string> input_matrix;
		for (int input_index = 0; input_index < n1; input_index++)
		{
			string n2;
			cin >> n2;
			input_matrix.push_back(n2);
		}
		int n3;
		cin >> n3;
		for (int n4_index = 0; n4_index < n3; n4_index++)
		{
			char c1; int c2; int c3;
			cin >> c1 >> c2 >> c3;

			vector<string> command_matrix;
			if (c1 == 'I')
			{
				for (int c_index = 0; c_index < c3; c_index++)
				{
					string c_string;
					cin >> c_string;
					command_matrix.push_back(c_string);
				}
				for (int r_index = 0; r_index < command_matrix.size(); r_index++)
				{
					input_matrix.insert(input_matrix.begin() + c2 + r_index, command_matrix[r_index]);
				}
			}
			else if (c1 == 'D')
			{
				for (int r_index = 0; r_index < c3; r_index++)
				{
					//input_matrix.erase(input_matrix.begin() + c2 + r_index);
					input_matrix.erase(input_matrix.begin() + c2);
				}
			}
		}
		cout << "#" << test_case << " ";
		for (int output_index = 0; output_index < 10; output_index++)
		{
			cout << input_matrix[output_index] << " ";
		}
		cout << endl;
	}

	return 0;
}