#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		int n1=0;
		cin >> n1;
		vector<string> n2_matrix;
		for (int n2_case = 0; n2_case < n1; n2_case++)
		{
			string n2;
			cin >> n2;
			n2_matrix.push_back(n2);
		}
		int n3=0;
		cin >> n3;
		for (int n4_case = 0; n4_case < n3; n4_case++)
		{
			vector<string> n4_matrix;
			char c1 = 0; int x = 0; int y = 0;
			cin >> c1;
			if (c1 == 'I')
			{
				cin >> x >> y;
				for (int y_count = 0; y_count < y; y_count++)
				{
					string n4;
					cin >> n4;
					//n4_matrix.push_back(n4);
					n2_matrix.insert(n2_matrix.begin() + x + y_count, n4);
				}
			}
			else if (c1 == 'D')
			{
				cin >> x >> y;
				n2_matrix.erase(n2_matrix.begin() + x, n2_matrix.begin() + x + y);
			}
			else if (c1 == 'A')
			{
				cin >> y;
				for (int y_count = 0; y_count < y; y_count++)
				{
					string n4;
					cin >> n4;
					n2_matrix.push_back(n4);
				}
			}
		}
		cout << "#" << test_case << " ";
		for (int i = 0; i < 10; i++)
		{
			cout<<n2_matrix[i]<<" ";
		}
		cout << endl;
		
	}
	return 0;
}