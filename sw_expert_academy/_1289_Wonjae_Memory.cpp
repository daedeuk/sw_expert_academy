#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		string input_memory;
		cin >> input_memory;
		vector<bool> v_input_memory;
		vector<bool> v_output_memory;
		for (int input_index = 0; input_index < input_memory.size(); input_index++)
		{
			bool n_index = input_memory[input_index] - 48;
			v_input_memory.push_back(n_index);
			v_output_memory.push_back(false);
		}
		int result_count = 0;
		for (int input_index = 0; input_index < v_input_memory.size(); input_index++)
		{
			if (v_input_memory[input_index] != v_output_memory[input_index])
			{
				for (int output_index = input_index; output_index < v_output_memory.size(); output_index++)
				{
					v_output_memory[output_index] = v_input_memory[input_index];
				}
				result_count++;
			}
		}
		cout << "#" << test_case << " "<<result_count<<endl;
		
	}
	return 0;
}