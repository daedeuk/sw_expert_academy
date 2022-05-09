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
		vector<string> s_matrix;
		for (int s_index = 0; s_index < n1; s_index++)
		{
			string s_input;
			cin >> s_input;
			s_matrix.push_back(s_input);
		}
		int n3;
		cin >> n3;
		for (int f_index = 0; f_index < n3; f_index++)
		{
			char m1;
			int m2;
			int m3;
			cin >> m1 >> m2 >> m3;
			vector<string> m_matrix;
			for (int o_index = 0; o_index < m3; o_index++)
			{
				string c_input;
				cin >> c_input;
				m_matrix.push_back(c_input);
			}
			for (int r_index = 0; r_index < m_matrix.size(); r_index++)
			{
				/*
				if (m2 + r_index >= n1)
				{
					break;
				}
				*/
				s_matrix.insert(s_matrix.begin() + m2 + r_index, m_matrix[r_index]);
				//s_matrix[m2 + r_index] = m_matrix[r_index];
			}
		}
		cout << "#" << test_case << " ";
		for (int output_index = 0; output_index < 10; output_index++)
		{
			cout << s_matrix[output_index] << " ";
		}
		cout << endl;
	}
	return 0;
}