#include<iostream>

using namespace std;
int index, number_of_involution;

int involution(int ind, int num)
{
	if (num == 1)
		return ind;
	return ind * involution(ind, --num);
}

int main()
{
	int T = 10;
	for (int test_case = 1; test_case <= 10; test_case++)
	{
		int test_number;
		cin >> test_number;
		cin >> index >> number_of_involution;
		int result = involution(index, number_of_involution);
		cout << "#" << test_number << " " << result << endl;
	}

	return 0;
}