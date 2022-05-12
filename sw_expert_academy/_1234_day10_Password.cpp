#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		int n_length;
		cin >> n_length;
		string s_password;
		cin >> s_password;
		vector<int> v_password;
		for (int n_password = 0; n_password < n_length; n_password++)
		{
			int i_password = s_password[n_password] - 48;
			v_password.push_back(i_password);
		}

		bool search_not_end = true;
		while (search_not_end)
		{
			for (int search_index = 0; search_index < v_password.size(); search_index++)
			{
				if (search_index == v_password.size() - 1)
				{
					search_not_end = false;
					break;
				}
				if (v_password[search_index] == v_password[search_index + 1])
				{
					//1
					v_password.erase(v_password.begin() + search_index, v_password.begin() + search_index + 1 +1);

					//2
					/*
					v_password.erase(v_password.begin() + search_index);
					v_password.erase(v_password.begin() + search_index);
					*/
					break;
				}
			}
		}
		cout << "#" << test_case << " ";
		for (int output_index = 0; output_index < v_password.size(); output_index++)
		{
			cout << v_password[output_index];
		}
		cout << endl;

	}
	return 0;
}