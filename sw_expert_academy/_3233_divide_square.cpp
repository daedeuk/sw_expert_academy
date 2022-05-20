#include<iostream>

using namespace std;
long long int A, B;
int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> A >> B;
		long long int square_a_area = (A * A);
		long long int square_b_area = (B * B);
		long long int result = square_a_area / square_b_area;
		cout <<"#"<<test_case<<" "<< result << endl;
	}
	return 0;
}