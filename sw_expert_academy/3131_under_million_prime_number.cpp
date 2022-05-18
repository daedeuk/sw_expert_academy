#include<iostream>
#include<cmath>

using namespace std;


// 에라토스테네스의 체

int is_prime(int _number)
{
	int _result = 1;
	for (int check_number = 1; check_number < _number; check_number++)
	{
		if (_number % check_number == 0)
		{
			_result = check_number;
		}
	}
	if (_result == 1)
	{
		return _number;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int min_number = 2;
	int max_number = pow(10, 6);
	for (int i = min_number; i <= max_number; i++)
	{
		int result = 1;
		result = is_prime(i);
		if (result > 1)
		{
			cout << result << " ";
		}
	}
	return 0;
}