#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v_matrix;
	for (int i = 0; i < 6; i++)
	{
		int x;
		cin >> x;
		v_matrix.push_back(x);
	}

	v_matrix.erase(unique(v_matrix.begin(), v_matrix.end()), v_matrix.end());
	for (int i = 0; i < v_matrix.size(); i++)
	{
		cout<<v_matrix[i];
	}
	return 0;
}