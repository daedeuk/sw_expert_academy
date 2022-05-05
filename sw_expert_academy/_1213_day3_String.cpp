#include<iostream>
#include<string>

using namespace std;

bool findString(string i_string, string f_string, int s_index)
{
	bool result = true;
	for (int search_find = 0; search_find < f_string.length(); search_find++)
	{
		if (i_string[s_index + search_find] != f_string[search_find])
		{
			result = false;
		}
	}
	return result;
}

int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= 10; test_case++)
	{
		int test_number;
		cin >> test_number;
		string find_string;
		cin >> find_string;
		string input_string;
		cin >> input_string;

		int result_sum = 0;
		for (int search_index = 0; search_index < input_string.length(); search_index++)
		{
			if (input_string[search_index] == find_string[0])
			{
				result_sum+=findString(input_string, find_string, search_index);
			}
		}
		cout << "#" << test_number << " " << result_sum << endl;
	}
	return 0;
}