#include<iostream>

using namespace std;

int N, A, B;
int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> N >> A >> B;
		long long min = 9876543210;
		long long R, C;
		for (R = 1; R <=N; R++)
		{
			//다 쓸 필요는 없음.
			for (C = 1; C <=N; C++)
			{
				if (R * C > N)
				{
					break;
				}
				long long result = (A * (abs(R - C))) + (B * (N - (R * C)));
				if (min > result)
				{
					min = result;
				}
			}
		}
		cout << "#" << test_case << " " << min << '\n';

	}
	return 0;
}